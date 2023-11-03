#include <iostream>

using namespace std;

void pointer(void) {
	/**
	* 常量指针,指针本身是可以修改的，但是指针所指向的对象是不可修改的。
	*/
	int a = 10;
	const int* num = &a; // num是一个指向常量的指针，指向a，但不能通过num修改a的值

	/**
	* 指针常量,指针本身是不可以修改的，但是指针所指向的对象是可修改的。
	*/
	int b = 20;
	int* const num2 = &b; // num2是一个指针常量，指向b，但不能通过num2修改num2的指向，可以通过num2修改b的值
	/**
	* Tips; 如果要阅读一个类型，可以从右往左阅读理解
	* 例如 const int * const arr = 0  
	* 读作  一个常量类型的指针指向一个int类型的常量
	*/
	
}


void typeInfo(void) {
	/**
	* 类型别名 
	* 旧方法是 typedef
	* 新方法为 using
	*/
	typedef double wages;
	using SI = int;

	/**
	* auto类型
	* 根据初始值来推算变量的类型，使用auto定义的变量必须要有初始值
	*/
	int aa = 14, bb = 12;
	auto sum = aa + bb;
}

void main1(void) {
	//pointer();
	
	return;
}