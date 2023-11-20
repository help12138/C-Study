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
	// ��ΪҪ�����ඨ������Լ��İ汾,�����Ա����Ҫ����Ϊ�麯��
	virtual double net_price(size_t n) const { return n * price; }

	//���ڵ����ͨ���ᶨ��һ������������
	virtual ~Quote();
private:
	string bookNo;
protected:
	// ��������Է���,��������Ա���ܷ���
	double price = 0.0;
};

Quote::Quote()
{
}

Quote::~Quote()
{
}
#endif // !1
