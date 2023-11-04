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
	vector<string> ss {"s", "a", "v", "r", "j", "q", "x"};
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

void arrInfo(void) {
	/**
	* ����Ҳ�Ǵ����ͬ���͵���������С�̶��������������Ԫ��
	* ��������ʱ����ָ����������ͣ���˲��������õ�����
	* 
	*/
	
	// �ַ��������������ķ�ʽ��ֵʱ��������Ĭ�ϼ���һ���ո��
	char arrStr[7] = "nidnsa"; // �����Сʱ��Ҫ�������Ŀո��

	// �����������Ԫ�ص� �÷�Χfor
	int allArr[] = { 1,2,4,64,32,7,8,5 };
	for (auto arr : allArr) {
		cout << arr << " ";
	}

	/**
	* ʹ������ʱ�������������ת��Ϊָ��
	* �������ط��õ���������ʱ�򣬱��������Զ��Ľ����滻Ϊһ��ָ��������Ԫ�ص�ָ��
	* ��ʹ��deltypeʱ����ת�����ᷢ��
	*/

	//����Ҳ�к��� begin() �� end()����vector������ͬ�������ǳ�Ա�������÷���������
	int* beg = begin(allArr);
	int* ed = end(allArr);

}

int main(void) {
	
	
	
	return 0;
}