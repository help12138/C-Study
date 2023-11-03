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

	
}

void main(void) {
	pointer();
	return;
}