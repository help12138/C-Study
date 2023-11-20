/*
* ������������Ƶĺ���˼��, ���ݳ���,�̳кͶ�̬��
* 
* ͨ���̳���ϵ��һ����๹��һ�ֲ�ι�ϵ,ͨ���ڲ�ι�ϵ�ĸ�����һ������
* ������ֱ�ӻ��߼�ӵĴӻ���̳�,��Щ�̳еõ������Ϊ������
* ���ฺ�����ڲ�ι�ϵ�������๲ͬӵ�еĳ�Ա,��ÿ�������ඨ����Եĳ�Ա
*/
#include "OOP.h";

//�����������ȷָ�������ĸ���̳ж���, ��������ö��Ÿ�����������
// ����������඼ֻ�̳�һ����,���ֱ���Ϊ���̳�
class Bulk_quote : public Quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const string& book, double p, size_t qty, double disc) {};

	//�����override ��ʽ��ע��ʹ��ĳ����Ա�������������̳е��麯��
	double net_price(size_t) const override;
private:
	size_t min_qty = 0;
	double discount = 0.0;
};

double Bulk_quote::net_price(size_t cnt) const {
	// ��������Է��ʻ���Ĺ��г�Ա���ܱ�����Ա
	if (cnt >= min_qty)
		return cnt * (1 - discount) * price;
	else
		return cnt * price;
}

int main() {
	return 0;
}
