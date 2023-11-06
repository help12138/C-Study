/**
*函数相关的信息
* 实参是形参的初始值，且实参数据类型必须与形参数据类型一样。
* 
* 函数定义找准位置，如果是在main函数上面，则无需声明，如果定义写在main函数下面，则需要在main函数上面写一个函数声明
* 或者写在头文件中，与主代码页面上部引用头文件
* 
* 在参数传递过程中如果形参是引用类型，它将被绑定到对应的实参上。否则将实参的值拷贝一份赋给形参
* 
* 如果有几个函数名相同，但是形参列表不同，我们称之为函数重载
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
	/**
	*每个变量都有自己的生命周期，及从初始创建位置到销毁位置。
	*有的变量在函数体内创建，函数销毁时同时会被销毁。这种称为局部变量
	* 如果不想销毁局部变量，可以在定义的前面加上一个 static ,结果如下所示。
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
	* 指针传参
	* 指针跟其它非引用类型一样，传参时进行拷贝操作。两个指针是不同的指针
	*/
	*ip = 0;  // 改变了指针ip所指的对象
	ip = 0;   // 只改变了ip的局部拷贝，实参未被改变.

	/*int i = 23;
	reset(&i);
	cout << "i= " << i;*/
}

string::size_type find_char(const string& s, char c, string::size_type& occurs) {
	/**
	*引用传参
	*不需要拷贝，直接传递原实参。
	* 
	* 把函数不会改变的形参定义成普通引用是一种比较常见的错误，
	* 尽量定义为常量引用。
	* 
	*/
	auto ret = s.size();
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i) {
		if (s[i] == c) {
			if (ret == s.size()) {
				ret = i;  // 返回第一次c 出现的位置
			}
			++occurs;
		}
	}
	return ret;
	/*string s = "jhfcdsodf";
	string::size_type ctr;
	find_char(s, 'c', ctr);*/
}

void print(int(&arr)[3]) {
	arr[0] = 89;
	cout << *arr << endl; 
	cout << arr+1 << endl; 
	cout << arr+2;
}

int main(void) {
	int k[3] = { 1,4,6 };
	print(k);
	cout << "k[0] is " << k[0];
	return 0;
}