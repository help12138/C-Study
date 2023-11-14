/*
* ��������֧�ָ�Ч�Ĺؼ��ֲ��Һͷ���,��Ҫ��������������
* map��set
* ����������֧��˳��������λ����ز���,��ΪԪ���Ǹ��ݹؼ��ִ洢��
* Ҳ��֧�ֹ��캯�����߲��뺯��������Щ����һ��Ԫ��ֵ��һ������ֵ�Ĳ���
* 
* pair��һ�������ض����͵�ģ��,��������������
* pair�����ݳ�Ա��public��, ������Ա�ֱ�����Ϊfirst��second
*/
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>

using namespace std;

void mapInfo(void) {
	/*
	* map����ͨ������Ϊ��������
	* ����ͨ��һ���ؼ���,������λ��������ֵ
	*/
	map<string, size_t> word_count;  // ��Ϊstring����,ֵΪ size_t���͵�mapԪ��
	set<string> exculde = { "an","he", "her", "He", "Her" };  // setֻ�Բ��ڼ����еĵ��ʽ��в���
	string word;
	while (cin >> word)
	{
		if (exculde.find(word) == exculde.end()) { // find����ҵ���Ӧ�ĵ���,����λ��,���򷵻�β�������
			++word_count[word];  // ��ȡword�ļ������� +1
		}
	}
	for (const auto& w : word_count) {  // ��map�е�ÿ��Ԫ�ش�ӡ���
		cout << w.first << "occurs" << w.second
			<< ((w.second > 1) ? "times" : "time") << endl;
	}
}

int main11() {

	return 0;
}
