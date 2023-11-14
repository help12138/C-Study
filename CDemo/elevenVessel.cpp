/*
* 关联容器支持高效的关键字查找和访问,主要是两个关联容器
* map和set
* 关联容器不支持顺序容器的位置相关操作,因为元素是根据关键字存储的
* 也不支持构造函数或者插入函数操作这些接受一个元素值和一个数量值的操作
* 
* pair是一个生成特定类型的模板,绑定两个数据类型
* pair的数据成员是public的, 两个成员分别命名为first和second
*/
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>

using namespace std;

void mapInfo(void) {
	/*
	* map类型通常被称为关联数组
	* 我们通过一个关键字,而不是位置来查找值
	*/
	map<string, size_t> word_count;  // 键为string类型,值为 size_t类型的map元素
	set<string> exculde = { "an","he", "her", "He", "Her" };  // set只对不在集合中的单词进行操作
	string word;
	while (cin >> word)
	{
		if (exculde.find(word) == exculde.end()) { // find如果找到对应的单词,返回位置,否则返回尾后迭代器
			++word_count[word];  // 提取word的计数器并 +1
		}
	}
	for (const auto& w : word_count) {  // 对map中的每个元素打印结果
		cout << w.first << "occurs" << w.second
			<< ((w.second > 1) ? "times" : "time") << endl;
	}
}

int main11() {

	return 0;
}
