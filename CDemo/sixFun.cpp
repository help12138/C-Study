/**
*函数相关的信息
* 实参是形参的初始值，且实参数据类型必须与形参数据类型一样。
* 
* 函数定义找准位置，如果是在main函数上面，则无需声明，如果定义写在main函数下面，则需要在main函数上面写一个函数声明
* 或者写在头文件中，与主代码页面上部引用头文件
* 
* 在参数传递过程中如果形参是引用类型，它将被绑定到对应的实参上。否则将实参的值拷贝一份赋给形参
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

int main(void) {
	for (size_t i = 0; i !=10; ++i)
	{
		cout << count_calls() << endl;
	}
	return 0;
}