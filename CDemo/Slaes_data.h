#ifndef _SLAES_DATA_
#define _SLAES_DATA_

#include<iostream>
#include<string>
using namespace std;

// 初次定义sale_data类
struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

//改进 sale_data类
struct Sales_data2
{
	string isbn() const { return bookNo; };
	Sales_data2& combine(const Sales_data2&);
	double avg_price() const;

	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
Sales_data2 add(const Sales_data2&, const Sales_data2&);
ostream& print(ostream&, const Sales_data2&);
istream& read(istream&, Sales_data2&);
#endif 
