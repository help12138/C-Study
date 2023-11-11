/**
* IO类
* 我们不能拷贝或者对IO对象赋值
* 
*/

#include<iostream>
#include<string>
// 文件操作所需头文件
#include<fstream>

using namespace std;

int main() {
	ofstream fout;
	/*string filename = "E:\\CTest\\CDemo\\test.txt";
	* string filename = R"E:\CTest\CDemo\test.txt";
	* fout.open(filename);
	* 也可以用变量来表示
	*/
	fout.open("E:\\CTest\\CDemo\\test.txt");  // 可指定地址

	fout << "春花秋月何时了,\n";
	fout << "往事知多少,\n";
	fout << "小楼昨夜又东风,\n";
	fout << "故国不堪回首月明中,\n";

	fout.close();  // 文件打开后必须关闭
	return 0;
}