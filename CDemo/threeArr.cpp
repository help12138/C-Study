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

void arrInfo(void) {
	/**
	* 数组也是存放相同类型的容器，大小固定，不能随意添加元素
	* 定义数组时必须指定数组的类型，因此不存在引用的数组
	* 
	*/
	
	// 字符数组以字面量的方式赋值时，最后面会默认加上一个空格符
	char arrStr[7] = "nidnsa"; // 定义大小时不要忘记最后的空格符

	// 输出所有数组元素的 用范围for
	int allArr[] = { 1,2,4,64,32,7,8,5 };
	for (auto arr : allArr) {
		cout << arr << " ";
	}
	/**
	* 使用数组时，编译器会把他转换为指针
	* 当其它地方用到数组名的时候，编译器会自动的将其替换为一个指向数组首元素的指针
	* 当使用deltype时这种转换不会发生
	*/

	//数组也有函数 begin() 和 end()，与vector功能相同，但不是成员函数，用法有所区别
	int* beg = begin(allArr);
	int* ed = end(allArr);

}

void allMoreArr(void) {
	/**
	* 多维数组   c++严格来讲没有多维数组，有的是数组的数组
	*/
	int mArr[3][4]; // 大小为3的数组，每个元素是含有四个整数的数组

	// 通常用双层for循环来遍历二维数组

}

int main(void) {
	
	constexpr size_t rowCnt = 3, colCnt = 4;
	int ia[rowCnt][colCnt];
	for (size_t i = 0; i != rowCnt; ++i) {
		for (size_t j = 0; j != colCnt; ++j) {
			ia[i][j] = i * colCnt + j;
		}
		cout << *ia[i] << endl;
	}
	
	return 0;
}