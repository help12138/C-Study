/*
* 关联容器支持高效的关键字查找和访问,主要是两个关联容器
* map和set
*/
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>

using namespace std;


int main() {
	map<string, size_t> word_count;
	string word;
	while (cin >> word)
	{
		++word_count[word];
	}
	for (const auto& w : word_count) {
		cout << w.first << "occurs" << w.second
			<< ((w.second > 1) ? "times" : "time") << endl;
	}

	return 0;
}
