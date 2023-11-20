#ifndef QUOTE
#define QUOTE

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Quote
{
public:
	Quote() = default;
	Quote(const string& book, double sales_price) :
		bookNo(book), price(sales_price) {}

	string isbn() const { return bookNo; }
	string isbn() const;
	// 因为要派生类定义各自自己的版本,基类成员函数要定义为虚函数
	virtual double net_price(size_t n) const { return n * price; }

	//根节点的类通常会定义一个虚析构函数
	virtual ~Quote();
private:
	string bookNo;
protected:
	// 派生类可以访问,而其它成员不能访问
	double price = 0.0;
};

Quote::Quote()
{
}

Quote::~Quote()
{
}
#endif // !1
