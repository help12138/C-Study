/*
�����㷨
��Ϊ��׼����������������Ƚ���,�޷��������е�ʹ������
��׼�ⶨ����һ�鷺���㷨��Ϊ������������ʵ�ֶ������
��׼�ⶨ����100����㷨,������һ�µĽṹ
*/
#include<iostream>
#include<string>
#include<vector>
#include<numeric>
#include <list>
#include<algorithm>

using namespace std;

void accuInfo(void) {
	/*
	* accumulate ���Խ�vector������stringԪ����������
	* ��Ҫͷ�ļ� numeric
	*/
	vector<string> str = { "��","ʮ", "��", "��" };
	string sum = accumulate(str.begin(), str.end(), string(""));
	cout << sum;
}
void equalInfo(void) {
	/*
	* equal����һ�������е�ÿ��Ԫ����ڶ��������еĶ�ӦԪ�ؽ��бȽ�
	* �����ӦԪ�ض����,�򷵻�true,���򷵻�false
	* ��������������
	*/
	vector<string> roster1 = { "hao", "hao", "xue", "xi" };
	list<const char*> roster2 = { "hao", "hao", "xue", "xi" };
	bool result = equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
}

void ba_in(void) {
	/*
	* back_inserter����һ��ָ������������,����һ����������󶨵Ĳ��������.
	* ������ͨ����������ֵʱ,��ֵ����������push_back��һ�����и���ֵ��Ԫ����ӵ�������
	*/
	vector<int> vec;
	auto it = back_inserter(vec);
	*it = 42;
	*it = 13;
	cout << vec[1] << " " << vec[0];
}

void elimDups(vector<string>& word) {
	/*
	* sort���¸���������, ��������������
	* unique������������,�����ڵ��ظ���"����",������һ��ָ���ظ���Χĩβ�ĵ�����
	* erase ɾ����Χ�ڵ�Ԫ��
	*/
	sort(word.begin(), word.end());
	auto end_unique = unique(word.begin(), word.end());
	word.erase(end_unique, word.end());
}

int main10() {
	
	

	return 0;
}
