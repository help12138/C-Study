#include <iostream>
#include <string>
using namespace std;

void strFun(void) {
	/**
	* getline(is, s)函数  从is读取一整行 赋值给s
	*/
	string s1;
	while (getline(cin, s1))
	{
		cout << s1 << endl;
	}
}

void main(void) {
	/**
	* 字符串
	* 需要引入头文件<string>
	*/
	string str = "hello string";  // 拷贝初始化
	int num(24); // 直接初始化

	
	return;
}