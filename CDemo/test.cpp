#include <iostream>

using namespace std;

void pointer(void) {
	/**
	* ����ָ��,ָ�뱾���ǿ����޸ĵģ�����ָ����ָ��Ķ����ǲ����޸ĵġ�
	*/
	int a = 10;
	const int* num = &a; // num��һ��ָ������ָ�룬ָ��a��������ͨ��num�޸�a��ֵ

	/**
	* ָ�볣��,ָ�뱾���ǲ������޸ĵģ�����ָ����ָ��Ķ����ǿ��޸ĵġ�
	*/
	int b = 20;
	int* const num2 = &b; // num2��һ��ָ�볣����ָ��b��������ͨ��num2�޸�num2��ָ�򣬿���ͨ��num2�޸�b��ֵ

	
}

void main(void) {
	pointer();
	return;
}