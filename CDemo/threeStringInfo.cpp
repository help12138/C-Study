#include <iostream>
#include <string>
using namespace std;

void strFun(void) {
	/**
	* getline(is, s)����  ��is��ȡһ���� ��ֵ��s
	*/
	string s1;
	while (getline(cin, s1))
	{
		cout << s1 << endl;
	}

	/**
	* size() �����ַ������ַ�����
	*/
	string str = "hello string";
	cout << str.size(); // size(str) Ҳ��
}

void strFor(void) {
	/**
	* ʹ�� for(���ͱ��� : ��������) ����ʽ���������ַ�����ÿ���ַ����Դ�����������
	*/
	string str1("thiw is fa");
	for (auto& c : str1) {
		c = toupper(c); // �����е��ַ���Ϊ��д
	}
	cout << str1 << endl;
}

void strIndex(void) {
	/**
	* �����±��������ַ����е��ַ�
	*/
	const string hexdigits = "0123456789ABCDEF";
	cout << "����0-15֮�������" << endl;
	cout << "��ȡ��Ӧ��ʮ�����Ʊ���" << endl;

	string result;
	string::size_type n;
	while (cin >> n) {
		if (n < hexdigits.size()) {
			result += hexdigits[n];
		}
	}
	cout << result << " " << endl;
}

int main2(void) {
	/**
	* �ַ���
	* ��Ҫ����ͷ�ļ�<string>
	*/
	string str = "hello string";  // ������ʼ��
	int num(24); // ֱ�ӳ�ʼ��
	
	
	return 0;
}