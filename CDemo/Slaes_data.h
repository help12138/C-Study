#ifndef _SLAES_DATA_
#define _SLAES_DATA_

#include<iostream>
#include<string>
using namespace std;

// ���ζ���sale_data��
struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

//�Ľ� sale_data��
struct Sales_data2
{
	/// <summary>
	/// ���캯��
	/// ��ͨ��һ�����߼�������ĳ�Ա���������������ĳ�ʼ�����̣���Щ�����������캯��
	/// �ж�һ�����ں����ǲ��ǹ��캯���������������ǲ�����������ͬ��
	/// ���캯��û�з�������
	/// ����԰���������캯�������������غ������
	/// ���캯�����ܱ�������const��
	/// �������û��������д�κι��캯��������Զ�����������һ��Ĭ�ϵĹ��캯��
	/// </summary>

	Sales_data2() = default;
	Sales_data2(const string& s) :bookNo(s) {};
	Sales_data2(const string& s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p* n) {};
	Sales_data2(istream &is) {
		read(is, *this);
	};
	// ��const���εĳ�Ա����������������ֻ�ܵ�������const���ι��ĺ������Ҳ����޸ı���
	// ���ǿ��Ա�������const���ι��ĳ�Ա�������á�
	string isbn() const { return bookNo; };
	// �������г�Ա������������ڲ����������ǳ�Ա��������Զ���������Ҳ���Զ���������
	// ��������������
	Sales_data2& combine(const Sales_data2&);
	double avg_price() const;

	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
// �ǳ�Ա������Ȼ������Ľӿڣ�������������ı���.
//�ǳ�Ա����ͨ���Ѻ����������Ͷ���ֿ�����
Sales_data2 add(const Sales_data2&, const Sales_data2&);
ostream& print(ostream&, const Sales_data2&);
istream& read(istream&, Sales_data2&);


double Sales_data2::avg_price() const {
	if (units_sold) {
		return revenue / units_sold;
	}
	else {
		return 0;
	}
};

Sales_data2& Sales_data2::combine(const Sales_data2& rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

istream& read(istream& is, Sales_data2& item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream& print(ostream& os, const Sales_data2& item) {
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price();
	return os;
}

Sales_data2 add(const Sales_data2& lhs, const Sales_data2& rhs) {
	Sales_data2 sum = lhs;
	sum.combine(rhs);
	return sum;
}
#endif 
