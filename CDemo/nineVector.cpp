/**
* ��������
* vector �ɱ��С����
* deque ˫�˶���
* list ˫������
* forward_list ��������
* array �̶���С����
* string ר�����ڱ����ַ�
* ͨ��,���ʹ��vector ,���������������õĳ���
* ˳�������������Ա����������͵�Ԫ��
* 
* ������������ͬ�Ľӿ�:���һ���������ṩĳ������,��ô�����ṩ��ͬ�����ĵ����������������ʵ�ַ�ʽ������ͬ��.
* 
* һ���������ķ�Χ��һ�Ե�������ʾ,�����������ֱ�ָ��ͬһ�������е�Ԫ�ػ���βԪ��֮���λ��
* ����������������Ϊ begin �� end;
* [begin, end]  ��ʾ��Χ��begin��ʼ,��end����
*/

#include<iostream>
#include<string>
#include<array>
#include<list>

using namespace std;

void vectorInfo(void) {
	list<string> a = { "lilei", "hanmeimei","xiaoming" };

	//c��ͷ��begin֧��auto��begin��end�Ľ��,���const_iterator���͵ĵ�����
	auto it7 = a.begin();  // ����a��constʱ,it7��const_iterator
	auto it8 = a.cbegin();  // it8��const_iterator

	//array����ʹ��ʱ����ָ��Ԫ�����ͺʹ�С
	//array<int, 10>;
	// ���ǲ��ܶ������������ͽ��п����͸�ֵ,����array���Ͳ��޴�����
	//int digs[4] = { 1,34,56,3 };
	//int cpy[4] = digs;   �ᱨ��
	array<int, 3> arr = { 1,3,5 };
	array<int, 3> copyarr = arr; // ����array����,���ͺʹ�С��Ҫ��ԭarray����һ��

}

int main() {
	int b[3] = { 1,4,6 };
	int c[3] = { 2,5,7 };
	swap(b, c);
	cout << b[0] << " " << c[0] << endl;
	return 0;
}

