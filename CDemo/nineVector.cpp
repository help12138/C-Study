/**
* 容器类型
* vector 可变大小数组
* deque 双端队列
* list 双端链表
* forward_list 单向链表
* array 固定大小数组
* string 专门用于保存字符
* 通常,最好使用vector ,除非有用其它更好的场景
* 顺序容器几乎可以保存任意类型的元素
* 
* 迭代器有着相同的接口:如果一个迭代器提供某个操作,那么所有提供相同操作的迭代器对这个操作的实现方式都是相同的.
* 
* 一个迭代器的范围由一对迭代器表示,两个迭代器分别指向同一个容器中的元素或者尾元素之后的位置
* 这两个迭代器被称为 begin 和 end;
* [begin, end]  表示范围自begin开始,于end结束
*/

#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std;

void vectorInfo(void) {
	list<string> a = { "lilei", "hanmeimei","xiaoming" };

	//c开头的begin支持auto与begin和end的结合,获得const_iterator类型的迭代器
	auto it7 = a.begin();  // 仅当a是const时,it7是const_iterator
	auto it8 = a.cbegin();  // it8是const_iterator
}

int main() {
	return 0;
}

