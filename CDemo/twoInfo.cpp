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
	/**
	* Tips; ���Ҫ�Ķ�һ�����ͣ����Դ��������Ķ����
	* ���� const int * const arr = 0  
	* ����  һ���������͵�ָ��ָ��һ��int���͵ĳ���
	*/
	
}


void typeInfo(void) {
	/**
	* ���ͱ��� 
	* �ɷ����� typedef
	* �·���Ϊ using
	*/
	typedef double wages;
	using SI = int;

	/**
	* auto����
	* ���ݳ�ʼֵ��������������ͣ�ʹ��auto����ı�������Ҫ�г�ʼֵ
	*/
	int aa = 14, bb = 12;
	auto sum = aa + bb;
}

void main1(void) {
	//pointer();
	
	return;
}