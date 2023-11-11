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

void writeFile(void) {
	// 输出流对象创建
	ofstream fout;
	/*string filename = "E:\\CTest\\CDemo\\test.txt";
	* string filename = R"E:\CTest\CDemo\test.txt";
	* fout.open(filename);
	* 也可以用变量来表示
	* 输出流如果文件存在,则写入文件,如果文件不存在,则创建并写入文件
	* 如果要写入二进制文件,可以在open函数里加上 ios::binary
	*/
	fout.open("E:\\CTest\\CDemo\\test.txt");  // 可指定地址

	if (fout.is_open() == false) {
		// 打开文件后需要判断是否打开成功
		// 失败的情况主要有三种,1.目录不存在  2.磁盘空间已满  3没有权限,linux平台下常见
		cout << "打开文件失败" << endl;
		return;
	}

	fout << "春花秋月何时了,\n";
	fout << "往事知多少,\n";
	fout << "小楼昨夜又东风,\n";
	fout << "故国不堪回首月明中,\n";

	fout.close();  // 文件打开后必须关闭
}

void read(void) {
	ifstream fin;
	fin.open("E:\\CTest\\CDemo\\test.txt", ios::in);

	if (fin.is_open() == false) {
		//输入流失败原因只有一个,即文件不存在
		cout << "文件不存在" << endl;
		return;
	}

	string buffer;
	while (getline(fin, buffer))
	{
		cout << buffer << endl;
	}


	fin.close();
}

int main8() {
	fstream finof;
	finof.open("E:\\CTest\\CDemo\\test.txt", ios::app);
	if (finof.is_open() == false) {
		cout << "打开文件失败" << endl;
	}

	finof << "林花谢了春红,\n";
	finof << "太匆匆,\n";
	finof << "无奈朝来寒雨夜来风,\n";
	finof << "胭脂泪,游人醉,\n";
	finof << "自是人生长恨水长东\n";

	finof.close();
	return 0;
}