/**
*������ص���Ϣ
* ʵ�����βεĳ�ʼֵ����ʵ���������ͱ������β���������һ����
* 
* ����������׼λ�ã��������main�������棬�������������������д��main�������棬����Ҫ��main��������дһ����������
* ����д��ͷ�ļ��У���������ҳ���ϲ�����ͷ�ļ�
* 
* �ڲ������ݹ���������β����������ͣ��������󶨵���Ӧ��ʵ���ϡ�����ʵ�ε�ֵ����һ�ݸ����β�
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
	/**
	*ÿ�����������Լ����������ڣ����ӳ�ʼ����λ�õ�����λ�á�
	*�еı����ں������ڴ�������������ʱͬʱ�ᱻ���١����ֳ�Ϊ�ֲ�����
	* ����������پֲ������������ڶ����ǰ�����һ�� static ,���������ʾ��
 	*/
	static size_t ctr = 0;
	return ++ctr;
	/*for (size_t i = 0; i != 10; ++i)
	{
		cout << count_calls() << endl;
	}*/
}

void reset(int* ip) {
	/**
	* ָ�봫��
	* ָ�����������������һ��������ʱ���п�������������ָ���ǲ�ͬ��ָ��
	*/
	*ip = 0;  // �ı���ָ��ip��ָ�Ķ���
	ip = 0;   // ֻ�ı���ip�ľֲ�������ʵ��δ���ı�.

	/*int i = 23;
	reset(&i);
	cout << "i= " << i;*/
}

string::size_type find_char(const string& s, char c, string::size_type& occurs) {
	/**
	*���ô���
	*����Ҫ������ֱ�Ӵ���ԭʵ�Ρ�
	*/
	auto ret = s.size();
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i) {
		if (s[i] == c) {
			if (ret == s.size()) {
				ret = i;  // ���ص�һ��c ���ֵ�λ��
			}
			++occurs;
		}
	}
	/*string s = "jhfcdsodf";
	string::size_type ctr;
	find_char(s, 'c', ctr);*/
}

int main(void) {
	
	
	return 0;
}