/*
* 如果一个类需要自定义析构函数,几乎可以肯定他也需要自定义拷贝赋值运算符和拷贝构造函数
* 如果一个类需要一个拷贝构造函数,几乎可以肯定它也需要一个拷贝赋值运算符 反之亦然
* 无论是需要拷贝构造函数还是需要拷贝赋值运算符都不必然意味着也需要析构函数
*/
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Foo
{
public:
	//调用的是拷贝构造函数还是赋值运算符，主要是看是否有新的对象实例产生。
	//如果产生了新的对象实例，那调用的就是拷贝构造函数；如果没有，那就是对已有的对象赋值，调用的是赋值运算符。
	Foo();
	// 拷贝构造函数声明
	//拷贝构造函数的第一个参数必须是引用类型 因为 拷贝构造函数被用来初始化非引用类类型参数
	// 拷贝构造函数通常不应该是explicit的
	// 拷贝/移动构造函数必须是存在且可访问的. 例如,不能是private的
	/*
	* 拷贝构造函数应用场景
	* 一个类的对象初始化类的另一个对象  ps:注意关键字 初始化
	* 将一个对象作为实参传递给一个非引用类型的对象
	* 从一个返回类型为非引用类型的函数返回一个对象
	* 用花括号初始化一个数组中的元素或一个聚合类中的成员
	*/
	Foo(const Foo&);

	/*
	* 析构函数释放对象使用的资源,并销毁对象的非static数据成员
	* 没有返回值,也不接受参数
	* 因为不能被重载,对于一个给定类,只会有唯一一个析构函数
	* 在析构函数中,首先执行函数体,然后销毁成员, 成员按初始化顺序的逆序销毁
	* 
	* 无论何时,一个对象被销毁,就会自动调用其析构函数
	* 析构函数体自身并不直接销毁成员,在整个销毁过程中,析构函数体是作为成员销毁步骤之外的另一部分而进行的
	*/
	~Foo();

	// 类可以控制其对象如何赋值
	// 赋值运算符通常返回一个指向其左侧运算对象的引用
	Foo& operator = (const Foo&);

private:
	string name;
	int age = 0;
};

Foo::Foo() { }
Foo::Foo(const Foo &c):name(c.name),age(c.age)
{// 拷贝构造函数体

}

Foo::~Foo()
{
}

Foo& Foo::operator=(const Foo& rhs) {
	age = rhs.age;
	return *this;
}
void InitInfo() {
	/*
	* 直接初始化和拷贝初始化
	* 直接初始化以函数形式
	* 拷贝初始化以" = "形式
	*/
	string dots(4, 'd'); // 直接初始化
	string s1 = "kaobei";

	// 拷贝赋值运算符
	Foo man, man2;
	man = man2;

}

/*
* 为了定义拷贝操作,有两种选择
* 使类的行为看起来像一个值或者像一个指针
* 使类的行为看起来像一个值时,副本和原对象是完全独立的
* 使类的行为看起来像一个指针时,两者使用相同的底层数据
*/

class HasPtr
	//对于行为类似值的类
{
public:
	HasPtr();
	HasPtr(const string& s = string()) :
		ps(new string(s)), i(0) {};
	HasPtr(const HasPtr& p) :
		ps(new string(*p.ps)), i(p.i) {};
	HasPtr& operator=(const HasPtr&);
	~HasPtr();

private:
	string* ps;
	int i;
};

HasPtr::HasPtr()
{
}
HasPtr& HasPtr::operator=(const HasPtr& rhs) {
	auto newp = new string(*rhs.ps);
	delete ps;
	ps = newp;
	i = rhs.i;
	return *this;
}
HasPtr::~HasPtr()
{
	delete ps;
}


class HasPtr2
	// 对于行为类似指针的类
{
public:
	HasPtr2();
	HasPtr2(const string& s = string()) :
		ps(new string(s)), i(0), use(new size_t(1)) {};
	HasPtr2(const HasPtr2&p):
		ps(p.ps), i(p.i), use(p.use) {
		++*use;
	}
	HasPtr2& operator=(const HasPtr2&);
	~HasPtr2();

private:
	string* ps;
	int i;
	size_t* use; //用来记录有多少个共享*ps的成员
};

HasPtr2::HasPtr2()
{
}

HasPtr2& HasPtr2::operator=(const HasPtr2& rhs2) {
	++*rhs2.use;
	if (--*use == 0) {
		delete ps;
		delete use;
	}
	ps = rhs2.ps;
	i = rhs2.i;
	use = rhs2.use;
	return *this;

}

HasPtr2::~HasPtr2()
{
	if (--*use == 0) {
		delete ps;
		delete use;
	}
}

int main() {
	return 0;
}
