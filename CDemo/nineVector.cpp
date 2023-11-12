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
#include<vector>

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

	int b[3] = { 1,4,6 };
	int c[3] = { 2,5,7 };
	//swap�������������Ԫ��,����������������ͬ��Ԫ��
	swap(b, c);
	cout << b[0] << " " << c[0] << endl;

}

void orderArr() {
	/*
	* ˳������
	* ˳����������������Ĳ�֮ͬ������������֯Ԫ�صķ�ʽ
	*/
	/*
	* push_back  ������β�����Ԫ��
	* push_front ������ͷ�����Ԫ��
	* insert  ��ָ��λ�����Ԫ��
	*/
	string word;
	vector<string> str1;
	while (cin >> word)
	{
		str1.push_back(word);
	}
	// �������������ض�λ�÷�������Ԫ��
	list<string> lst;
	auto iter = lst.begin();
	while (cin >> word)
	{
		// Ч����ͬ��push_front;
		iter = lst.insert(iter, word);
	}

	/*
	* emplace_front,emplace, emplace_back
	* ��Щ�������������Ԫ��
	* �����ǵ���ʱ,���������ݸ�Ԫ�����͵Ĺ��캯��
	* 
	* �ٶ� c ����һ��sales_dataԪ��
	* 
	* c.emplace_back("sdsads" , 1234, 221);
	* ��ͬ��
	* c.push_back(Sales_data("sdsads" , 1234, 221));
	*/

	/*
	* ������resize���������С����
	*/
	list<int> ilist(10, 21);
	ilist.resize(15); // ��5��ֵΪ0��Ԫ����ӵ�ilist��β��
	ilist.resize(5);  // ��ilistĩβɾ��20��Ԫ��

	/**
	���������Ԫ�غʹ�������ɾ��Ԫ�صĲ������ܻ�ʹָ������Ԫ�ص�ָ��,����,���ߵ�����ʧЧ
	*/
	vector<int> nums = { 0,1,2,3,4,5,6,7,8,9 };
	auto oter = nums.begin();
	while (oter != nums.end())
	{
		if (*oter % 2) {
			oter = nums.insert(oter, *oter);
			oter += 2;
		}
		else {
			oter = nums.erase(oter);
		}

		cout << *oter++;
	}
}

int main() {
	

	return 0;
}

