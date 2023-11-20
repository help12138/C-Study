/*
* 面向对象程序设计的核心思想, 数据抽象,继承和动态绑定
* 
* 通过继承联系在一起的类构成一种层次关系,通常在层次关系的根部有一个基类
* 其它类直接或者间接的从基类继承,这些继承得到的类称为派生类
* 基类负责定义在层次关系中所有类共同拥有的成员,而每个派生类定义各自的成员
*/
#include "OOP.h";

//派生类必须明确指出他从哪个类继承而来
class Bulk_quote : public Quote {
public:
	double net_price(size_t) const override;
};

int main() {
	return 0;
}
