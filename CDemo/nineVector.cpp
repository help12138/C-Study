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
#include<vector>
#include<list>

using namespace std;

void vectorInfo(void) {
	list<string> a = { "lilei", "hanmeimei","xiaoming" };

	//c��ͷ��begin֧��auto��begin��end�Ľ��,���const_iterator���͵ĵ�����
	auto it7 = a.begin();  // ����a��constʱ,it7��const_iterator
	auto it8 = a.cbegin();  // it8��const_iterator
}

int main() {
	return 0;
}

