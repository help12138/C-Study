/**
*类相关
* 类的基本思想是数据抽象和封装，数据抽象是一种依赖于接口和实现分离的编程技术。
* 类的用户是程序员，而非应用程序的最终使用者
*/
#include "Slaes_data.h"

int firstSalesClass(void) {
	Sales_data data1, data2;
	double price = 0;

	cin >> data1.bookNo >> data1.units_sold >> price; // 第一笔交易
	data1.revenue = data1.units_sold * price;
	cout << "输入结束" << endl;
	cin >> data2.bookNo >> data2.units_sold >> price; // 第二笔交易
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
	// 调用sales_data2 类
	Sales_data2 total;
	if (read(cin, total)) {  // 第一笔交易
		Sales_data2 trans;
		while (read(cin, trans))  // 读入剩余的变量
		{
			if (total.isbn() == trans.isbn()) {  // 对比isbn
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

