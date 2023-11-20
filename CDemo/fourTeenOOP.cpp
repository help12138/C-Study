/*
* 面向对象程序设计的核心思想, 数据抽象,继承和动态绑定
* 
* 通过继承联系在一起的类构成一种层次关系,通常在层次关系的根部有一个基类
* 其它类直接或者间接的从基类继承,这些继承得到的类称为派生类
* 基类负责定义在层次关系中所有类共同拥有的成员,而每个派生类定义各自的成员
*/
#include "OOP.h";

//派生类必须明确指出他从哪个类继承而来, 后面可以用逗号隔开几个基类
// 大多数派生类都只继承一个类,这种被称为单继承
class Bulk_quote : public Quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const string& book, double p, size_t qty, double disc) {};

	//后面加override 显式的注明使用某个成员函数覆盖了它继承的虚函数
	double net_price(size_t) const override;
private:
	size_t min_qty = 0;
	double discount = 0.0;
};

double Bulk_quote::net_price(size_t cnt) const {
	// 派生类可以访问基类的公有成员和受保护成员
	if (cnt >= min_qty)
		return cnt * (1 - discount) * price;
	else
		return cnt * price;
}

int main() {
	return 0;
}
