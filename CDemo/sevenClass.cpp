/**
*�����
* ��Ļ���˼�������ݳ���ͷ�װ�����ݳ�����һ�������ڽӿں�ʵ�ַ���ı�̼�����
* ����û��ǳ���Ա������Ӧ�ó��������ʹ����
*/
#include "Slaes_data.h"

int firstSalesClass(void) {
	Sales_data data1, data2;
	double price = 0;

	cin >> data1.bookNo >> data1.units_sold >> price; // ��һ�ʽ���
	data1.revenue = data1.units_sold * price;
	cout << "�������" << endl;
	cin >> data2.bookNo >> data2.units_sold >> price; // �ڶ��ʽ���
	data2.revenue = data2.units_sold * price;

	if (data1.bookNo == data2.bookNo) {
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;

		cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0) {
			cout << totalRevenue / totalCnt << endl;
		}
		else {
			cout << " (no sales)" << endl;
		}
		return 0;
	}
	else {
		cerr << "Data must refer to the same ISBN" << endl;
		return -1;
	}
}

void runSales_data() {
	// ����sales_data2 ��
	Sales_data2 total;
	if (read(cin, total)) {  // ��һ�ʽ���
		Sales_data2 trans;
		while (read(cin, trans))  // ����ʣ��ı���
		{
			if (total.isbn() == trans.isbn()) {  // �Ա�isbn
				total.combine(trans);
			}
			else {
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else {
		cerr << "No data?" << endl;
	}
}

int main(void) {
	

	return 0;
}

