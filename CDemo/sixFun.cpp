/**
*函数相关的信息
* 实参是形参的初始值，且实参数据类型必须与形参数据类型一样。
*/

#include<iostream>

using namespace std;

int fact(int val) {
	//求阶乘
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