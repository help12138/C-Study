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
	// ��ΪҪ�����ඨ������Լ��İ汾,�����Ա����Ҫ����Ϊ�麯��
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
