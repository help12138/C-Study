#include<iostream>
#include<string>
#include<vector>
using namespace std;

void iteratorInfo(void) {
	/**
	* ������
	* ��Ч�ĵ���������ָ��ĳ��Ԫ�أ�����ָ��������βԪ�ص���һ��λ�ã�����������Ч������
	* 
	*/

	// ͨ�����������ַ�������ĸ��Ϊ��д
	string iterStr("some string");
	if (iterStr.begin() != iterStr.end()) {
		auto it = iterStr.begin();
		*it = toupper(*it);
	}

	// �� iterator �� const_inerator ����ʾ������������
	vector<int>::iterator t1;  // �ܶ�д
	string::iterator t2;
 	vector<int>::const_iterator t3;  // ֻ�ܶ�������д
	string::const_iterator t4;
}

void iterdic(void) {
	//���ַ�
	auto beg = ss.begin(), end = ss.end();
	auto mid = beg + (end - beg) / 2;
	while (mid != end && *mid != "a")
	{
		if ("a" < *mid) {
			end = mid;
		}
		else {
			beg = mid + 1;
		}
		mid = beg + (end - beg) / 2;
	}
}

int main(void) {
	vector<string> ss {"s","a","v", "r", "j", "q", "x"};

	
	return 0;
}