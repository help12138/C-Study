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

void writeFile(void) {
	// ��������󴴽�
	ofstream fout;
	/*string filename = "E:\\CTest\\CDemo\\test.txt";
	* string filename = R"E:\CTest\CDemo\test.txt";
	* fout.open(filename);
	* Ҳ�����ñ�������ʾ
	* ���������ļ�����,��д���ļ�,����ļ�������,�򴴽���д���ļ�
	* ���Ҫд��������ļ�,������open��������� ios::binary
	*/
	fout.open("E:\\CTest\\CDemo\\test.txt");  // ��ָ����ַ

	if (fout.is_open() == false) {
		// ���ļ�����Ҫ�ж��Ƿ�򿪳ɹ�
		// ʧ�ܵ������Ҫ������,1.Ŀ¼������  2.���̿ռ�����  3û��Ȩ��,linuxƽ̨�³���
		cout << "���ļ�ʧ��" << endl;
		return;
	}

	fout << "�������º�ʱ��,\n";
	fout << "����֪����,\n";
	fout << "С¥��ҹ�ֶ���,\n";
	fout << "�ʹ���������������,\n";

	fout.close();  // �ļ��򿪺����ر�
}

void read(void) {
	ifstream fin;
	fin.open("E:\\CTest\\CDemo\\test.txt", ios::in);

	if (fin.is_open() == false) {
		//������ʧ��ԭ��ֻ��һ��,���ļ�������
		cout << "�ļ�������" << endl;
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
		cout << "���ļ�ʧ��" << endl;
	}

	finof << "�ֻ�л�˴���,\n";
	finof << "̫�Ҵ�,\n";
	finof << "���γ�������ҹ����,\n";
	finof << "��֬��,������,\n";
	finof << "������������ˮ����\n";

	finof.close();
	return 0;
}