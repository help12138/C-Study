/*
* 动态内存和智能指针
*/
#include<iostream>
#include<string>
#include<vector>
#include<memory>

using namespace std;

int main() {
	shared_ptr<string>p1 = make_shared<string>("3, 's'");
	cout << *p1;
	return 0;
}
