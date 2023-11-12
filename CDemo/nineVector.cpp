/**
* 容器类型
* vector 可变大小数组
* deque 双端队列
* list 双端链表
* forward_list 单向链表
* array 固定大小数组
* string 专门用于保存字符
* 通常,最好使用vector ,除非有用其它更好的场景
* 顺序容器几乎可以保存任意类型的元素
* 
* 迭代器有着相同的接口:如果一个迭代器提供某个操作,那么所有提供相同操作的迭代器对这个操作的实现方式都是相同的.
* 
* 一个迭代器的范围由一对迭代器表示,两个迭代器分别指向同一个容器中的元素或者尾元素之后的位置
* 这两个迭代器被称为 begin 和 end;
* [begin, end]  表示范围自begin开始,于end结束
*/

#include<iostream>
#include<string>
#include<array>
#include<list>
#include<vector>

using namespace std;

void vectorInfo(void) {
	list<string> a = { "lilei", "hanmeimei","xiaoming" };

	//c开头的begin支持auto与begin和end的结合,获得const_iterator类型的迭代器
	auto it7 = a.begin();  // 仅当a是const时,it7是const_iterator
	auto it8 = a.cbegin();  // it8是const_iterator

	//array类型使用时必须指定元素类型和大小
	//array<int, 10>;
	// 我们不能对内置数组类型进行拷贝和赋值,但是array类型并无此限制
	//int digs[4] = { 1,34,56,3 };
	//int cpy[4] = digs;   会报错
	array<int, 3> arr = { 1,3,5 };
	array<int, 3> copyarr = arr; // 拷贝array数组,类型和大小又要与原array数组一样

	int b[3] = { 1,4,6 };
	int c[3] = { 2,5,7 };
	//swap交换两个数组的元素,两个容器必须有相同的元素
	swap(b, c);
	cout << b[0] << " " << c[0] << endl;

}

void orderArr() {
	/*
	* 顺序容器
	* 顺序容器与关联容器的不同之处在于两者组织元素的方式
	*/
	/*
	* push_back  从数组尾部添加元素
	* push_front 从数组头部添加元素
	* insert  从指定位置添加元素
	*/
	string word;
	vector<string> str1;
	while (cin >> word)
	{
		str1.push_back(word);
	}
	// 可以在容器中特定位置反复插入元素
	list<string> lst;
	auto iter = lst.begin();
	while (cin >> word)
	{
		// 效果等同于push_front;
		iter = lst.insert(iter, word);
	}

	/*
	* emplace_front,emplace, emplace_back
	* 这些操作构造而不是元素
	* 当我们调用时,将参数传递给元素类型的构造函数
	* 
	* 假定 c 保存一个sales_data元素
	* 
	* c.emplace_back("sdsads" , 1234, 221);
	* 等同于
	* c.push_back(Sales_data("sdsads" , 1234, 221));
	*/

	/*
	* 可以用resize来增大或缩小容器
	*/
	list<int> ilist(10, 21);
	ilist.resize(15); // 将5个值为0的元素添加到ilist的尾部
	ilist.resize(5);  // 从ilist末尾删除20个元素

	/**
	向容器添加元素和从容器中删除元素的操作可能会使指向容器元素的指针,引用,或者迭代器失效
	*/
	vector<int> nums = { 0,1,2,3,4,5,6,7,8,9 };
	auto oter = nums.begin();
	while (oter != nums.end())
	{
		if (*oter % 2) {
			oter = nums.insert(oter, *oter);
			oter += 2;
		}
		else {
			oter = nums.erase(oter);
		}

		cout << *oter++;
	}
}

int main() {
	

	return 0;
}

