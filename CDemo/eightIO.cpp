/**
* IO��
* ���ǲ��ܿ������߶�IO����ֵ
* 
*/

#include<iostream>
#include<string>
// �ļ���������ͷ�ļ�
#include<fstream>

using namespace std;

int main() {
	ofstream fout;
	/*string filename = "E:\\CTest\\CDemo\\test.txt";
	* string filename = R"E:\CTest\CDemo\test.txt";
	* fout.open(filename);
	* Ҳ�����ñ�������ʾ
	*/
	fout.open("E:\\CTest\\CDemo\\test.txt");  // ��ָ����ַ

	fout << "�������º�ʱ��,\n";
	fout << "����֪����,\n";
	fout << "С¥��ҹ�ֶ���,\n";
	fout << "�ʹ���������������,\n";

	fout.close();  // �ļ��򿪺����ر�
	return 0;
}