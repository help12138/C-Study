/*
泛型算法
因为标准库里面的容器操作比较少,无法满足所有的使用需求
标准库定义了一组泛型算法来为所有容器类型实现额外操作
标准库定义了100多个算法,但都有一致的结构
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
	* accumulate 可以将vector中所有string元素连接起来
	* 需要头文件 numeric
	*/
	vector<string> str = { "三","十", "功", "名" };
	string sum = accumulate(str.begin(), str.end(), string(""));
	cout << sum;
}
void equalInfo(void) {
	/*
	* equal将第一个序列中的每个元素与第二个序列中的对应元素进行比较
	* 如果对应元素都相等,则返回true,否则返回false
	* 接受三个迭代器
	*/
	vector<string> roster1 = { "hao", "hao", "xue", "xi" };
	list<const char*> roster2 = { "hao", "hao", "xue", "xi" };
	bool result = equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
}

void ba_in(void) {
	/*
	* back_inserter接受一个指向容器的引用,返回一个与该容器绑定的插入迭代器.
	* 当我们通过迭代器赋值时,赋值运算符会调用push_back将一个具有给定值的元素添加到容器中
	*/
	vector<int> vec;
	auto it = back_inserter(vec);
	*it = 42;
	*it = 13;
	cout << vec[1] << " " << vec[0];
}

void elimDups(vector<string>& word) {
	/*
	* sort重新给容器排序, 接受两个迭代器
	* unique重排输入序列,将相邻的重复项"消除",并返回一个指向不重复范围末尾的迭代器
	* erase 删除范围内的元素
	*/
	sort(word.begin(), word.end());
	auto end_unique = unique(word.begin(), word.end());
	word.erase(end_unique, word.end());
}

int main10() {
	
	

	return 0;
}
