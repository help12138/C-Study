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

	/**
	* size() 返回字符串的字符数。
	*/
	string str = "hello string";
	cout << str.size(); // size(str) 也行
}

void strFor(void) {
	/**
	* 使用 for(类型变量 : 操作对象) 的形式，来遍历字符串的每个字符，以此用来操作。
	*/
	string str1("thiw is fa");
	for (auto& c : str1) {
		c = toupper(c); // 将所有的字符改为大写
	}
	cout << str1 << endl;
}

void strIndex(void) {
	/**
	* 利用下标来操作字符串中的字符
	*/
	const string hexdigits = "0123456789ABCDEF";
	cout << "输入0-15之间的数字" << endl;
	cout << "获取对应的十六进制编码" << endl;

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
	* 字符串
	* 需要引入头文件<string>
	*/
	string str = "hello string";  // 拷贝初始化
	int num(24); // 直接初始化
	
	
	return 0;
}