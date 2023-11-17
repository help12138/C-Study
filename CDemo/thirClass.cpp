
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Foo
{
public:
	Foo();
	// 拷贝构造函数声明
	//拷贝构造函数的第一个参数必须是引用类型 因为 拷贝构造函数被用来初始化非引用类类型参数
	// 拷贝构造函数通常不应该是explicit的
	// 拷贝/移动构造函数必须是存在且可访问的. 例如,不能是private的
	Foo(const Foo&);
	~Foo();

private:
	string name;
};

Foo::Foo(){}
Foo::Foo(const Foo &c):name(c.name)
{// 拷贝构造函数体

}

Foo::~Foo()
{
}

void InitInfo() {
	/*
	* 直接初始化和拷贝初始化
	* 直接初始化以函数形式
	* 拷贝初始化以" = "形式
	*/
	string dots(4, 'd'); // 直接初始化
	string s1 = "kaobei";

	/*
	* 拷贝初始化不仅仅是用" = "情况下会发生,还有以下三种情况
	* 将一个对象作为实参传递给一个非引用类型的对象
	* 从一个返回类型为非引用类型的函数返回一个对象
	* 用花括号初始化一个数组中的元素或一个聚合类中的成员
	*/

}

int main() {
	return 0;
}
