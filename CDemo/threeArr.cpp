#include<iostream>
#include<string>
#include<vector>
using namespace std;

void iteratorInfo(void) {
	/**
	* 迭代器
	* 有效的迭代器或者指向某个元素，或者指向容器中尾元素的下一个位置，其它都是无效迭代器
	* 
	*/

	// 通过迭代器讲字符串首字母改为大写
	string iterStr("some string");
	if (iterStr.begin() != iterStr.end()) {
		auto it = iterStr.begin();
		*it = toupper(*it);
	}

	// 用 iterator 和 const_inerator 来表示迭代器的类型
	vector<int>::iterator t1;  // 能读写
	string::iterator t2;
 	vector<int>::const_iterator t3;  // 只能读，不能写
	string::const_iterator t4;
}

void iterdic(void) {
	//二分法
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

int main(void) {
	

	
	return 0;
}