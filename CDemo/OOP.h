#ifndef QUOTE
#define QUOTE

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Quote
{
public:
	Quote();
	~Quote();

	string isbn() const;
	// 因为要派生类定义各自自己的版本,基类成员函数要定义为虚函数
	virtual double net_price(size_t n) const;
private:

};

Quote::Quote()
{
}

Quote::~Quote()
{
}
#endif // !1
