/**
*������ص���Ϣ
* ʵ�����βεĳ�ʼֵ����ʵ���������ͱ������β���������һ����
*/

#include<iostream>

using namespace std;

int fact(int val) {
	//��׳�
	int ret = 1;
	while (val>1)
	{
		ret *= val--;
	}
	return ret;
}

size_t count_calls() {
	static size_t ctr = 0;
	return ++ctr;
}

int main(void) {
	for (size_t i = 0; i !=10; ++i)
	{
		cout << count_calls() << endl;
	}
	return 0;
}