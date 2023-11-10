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
	/// <summary>
	/// 构造函数
	/// 类通过一个或者几个特殊的成员函数来控制其对象的初始化过程，这些函数叫做构造函数
	/// 判断一个类内函数是不是构造函数，看他的名字是不是与类名相同。
	/// 构造函数没有返回类型
	/// 类可以包含多个构造函数，和其它重载函数差不多
	/// 构造函数不能被声明成const的
	/// 如果我们没有主动的写任何构造函数，类会自动帮我们生成一个默认的构造函数
	/// </summary>

	Sales_data2() = default;
	Sales_data2(const string& s) :bookNo(s) {};
	Sales_data2(const string& s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p* n) {};
	Sales_data2(istream &is) {
		read(is, *this);
	};
	// 由const修饰的成员函数，函数体里面只能调用其它const修饰过的函数，且不能修改变量
	// 但是可以被其它非const修饰过的成员函数调用。
	string isbn() const { return bookNo; };
	// 尽管所有成员都必须在类的内部声明，但是成员函数体可以定义在类内也可以定义在类外
	// 比如下面这两个
	Sales_data2& combine(const Sales_data2&);
	double avg_price() const;

	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
// 非成员函数虽然属于类的接口，但并不属于类的本身.
//非成员函数通常把函数的声明和定义分开来。
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
