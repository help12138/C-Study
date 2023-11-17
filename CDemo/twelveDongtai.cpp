/*
* 动态内存和智能指针
* 智能指针的出现是为了协助开发者合理使用动态内存
* 新的标准库主要有两种智能指针
* shared_ptr, unique_ptr, 
* 两者区别在于前者允许多个指针指向同一对象, 后者则独占所指向的对象
* 还有一个weak_ptr 指向 shared_ptr所管理的对象
* 这三种类型都定义在头文件 <memory>中
* 
* 程序使用动态内存一般处于三个原因
* 1. 程序不知道自己需要使用多少对象
* 2. 程序不知道所需对象的准确类型
* 3. 程序需要再多个对象间共享数据
*/
#include<iostream>
#include<string>
#include<vector>
#include<memory>

using namespace std;

void sharedInfo() {
	// 当我们创建一个新的指针, 必须提供一个额外的信息, 指针可以指向的类型
	// 如同vector一样,在尖括号里面写出类型
	// 最安全的分配和使用动态内存的方法是调用一个名为make_shared的标准库函数
	shared_ptr<string>p1 = make_shared<string>("3, 's'");
	// 如果我们不传递对象时, 对象就会进行值初始化
	shared_ptr<int> p2 = make_shared<int>();  // 初始值为 0;
	cout << *p1;

	/*
	* shared_ptr类会自动销毁此对象,它会通过另一个特殊的成员函数  析构函数  完成销毁工作
	* 每个类都有一个析构函数
	* 析构函数一般用来释放对象所分配的资源
	*/
}

void uniqueInfo() {
	/*
	* 某个时刻只能又一个unique_ptr指向一个给定对象
	* 当我们定义一个unique_ptr时,需要将其绑定到一个new返回的指针
	* 初始化unique_ptr必须采用直接初始化形式
	*/
	unique_ptr<int>p2(new int(32));

	/*
	* 我们不能拷贝或赋值unique_ptr
	* 但是可以通过release或reset将指针所有权转移
	*/
	unique_ptr<string>ps(new string("name is aaa"));
	unique_ptr<string>ps1(ps.release());  // release将ps置空
}

class StrBlob
{
	/*
	* 此类的所有对象共享同一套数据
	* 因此需要使用动态内存
	*/
public:
	typedef vector<string>::size_type size_type;
	StrBlob() :data(make_shared<vector<string>>()) {};
	StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {};
	size_type size() { return data->size(); }
	bool empty() const { return data->empty(); }
	// 添加和删除元素
	void push_back(const string& t) { data->push_back(t); }
	void pop_back();
	// 元素访问
	string& front();
	string& back();
	~StrBlob();

private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string& msg) const;
};

void StrBlob::check(size_type i, const string& msg)const {
	if (i >= data->size()) {
		throw out_of_range(msg);
	}
}

string& StrBlob::front() {
	check(0, "front on empty StrBlob");
	return data->front();
}

string& StrBlob::back() {
	check(0, "back on empty StrBlob");
	return data->back();
}

void StrBlob::pop_back() {
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

void newInfo() {
	/*
	* c++ 定义了两个运算来分配和释放动态内存
	* new  delete
	*/

	// 在自由空间分配的内存是无名的
	//且是默认初始化的
	string* ps = new string;  // 无名的初始化为空的string对象
	//也可以直接初始化
	int* ps1 = new int(15);
	// 值初始化
	int* ps2 = new int();

	// 如果我们提供了一个括号包围的初始化器,就可以使用auto
	// 不过只有当括号中仅有单一初始化器的时候才能使用auto
	//auto pl = new auto(obj);
}

void DeleteInfo() {
	// 我们通过delete表达式来将动态内存归还系统
	// 传递给delete的指针,必须指向动态分配的内存,或是一个空指针
	// 释放一块并非new分配的内存,或者将相同的指针释放多次,其行为是未定义的
	const int* ptr = new const int(1024);
	delete ptr;
	//由内置指针类型管理的内存,直到显示释放前它都是存在的
}

int main12() {
	
	
	return 0;
}
