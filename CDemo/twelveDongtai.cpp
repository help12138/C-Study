/*
* ��̬�ڴ������ָ��
* ����ָ��ĳ�����Ϊ��Э�������ߺ���ʹ�ö�̬�ڴ�
* �µı�׼����Ҫ����������ָ��
* shared_ptr, unique_ptr, 
* ������������ǰ��������ָ��ָ��ͬһ����, �������ռ��ָ��Ķ���
* ����һ��weak_ptr ָ�� shared_ptr������Ķ���
* ���������Ͷ�������ͷ�ļ� <memory>��
* 
* ����ʹ�ö�̬�ڴ�һ�㴦������ԭ��
* 1. ����֪���Լ���Ҫʹ�ö��ٶ���
* 2. ����֪����������׼ȷ����
* 3. ������Ҫ�ٶ������乲������
*/
#include<iostream>
#include<string>
#include<vector>
#include<memory>

using namespace std;

void sharedInfo() {
	// �����Ǵ���һ���µ�ָ��, �����ṩһ���������Ϣ, ָ�����ָ�������
	// ��ͬvectorһ��,�ڼ���������д������
	// �ȫ�ķ����ʹ�ö�̬�ڴ�ķ����ǵ���һ����Ϊmake_shared�ı�׼�⺯��
	shared_ptr<string>p1 = make_shared<string>("3, 's'");
	// ������ǲ����ݶ���ʱ, ����ͻ����ֵ��ʼ��
	shared_ptr<int> p2 = make_shared<int>();  // ��ʼֵΪ 0;
	cout << *p1;

	/*
	* shared_ptr����Զ����ٴ˶���,����ͨ����һ������ĳ�Ա����  ��������  ������ٹ���
	* ÿ���඼��һ����������
	* ��������һ�������ͷŶ������������Դ
	*/
}

void uniqueInfo() {
	/*
	* ĳ��ʱ��ֻ����һ��unique_ptrָ��һ����������
	* �����Ƕ���һ��unique_ptrʱ,��Ҫ����󶨵�һ��new���ص�ָ��
	* ��ʼ��unique_ptr�������ֱ�ӳ�ʼ����ʽ
	*/
	unique_ptr<int>p2(new int(32));

	/*
	* ���ǲ��ܿ�����ֵunique_ptr
	* ���ǿ���ͨ��release��reset��ָ������Ȩת��
	*/
	unique_ptr<string>ps(new string("name is aaa"));
	unique_ptr<string>ps1(ps.release());  // release��ps�ÿ�
}

class StrBlob
{
	/*
	* ��������ж�����ͬһ������
	* �����Ҫʹ�ö�̬�ڴ�
	*/
public:
	typedef vector<string>::size_type size_type;
	StrBlob() :data(make_shared<vector<string>>()) {};
	StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {};
	size_type size() { return data->size(); }
	bool empty() const { return data->empty(); }
	// ��Ӻ�ɾ��Ԫ��
	void push_back(const string& t) { data->push_back(t); }
	void pop_back();
	// Ԫ�ط���
	string& front();
	string& back();
	~StrBlob();

private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string& msg) const;
};

void StrBlob::check(size_type i, const string& msg)const {
	if (i >= data->size()) {
		throw out_of_range(msg);
	}
}

string& StrBlob::front() {
	check(0, "front on empty StrBlob");
	return data->front();
}

string& StrBlob::back() {
	check(0, "back on empty StrBlob");
	return data->back();
}

void StrBlob::pop_back() {
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

void newInfo() {
	/*
	* c++ ����������������������ͷŶ�̬�ڴ�
	* new  delete
	*/

	// �����ɿռ������ڴ���������
	//����Ĭ�ϳ�ʼ����
	string* ps = new string;  // �����ĳ�ʼ��Ϊ�յ�string����
	//Ҳ����ֱ�ӳ�ʼ��
	int* ps1 = new int(15);
	// ֵ��ʼ��
	int* ps2 = new int();

	// ��������ṩ��һ�����Ű�Χ�ĳ�ʼ����,�Ϳ���ʹ��auto
	// ����ֻ�е������н��е�һ��ʼ������ʱ�����ʹ��auto
	//auto pl = new auto(obj);
}

void DeleteInfo() {
	// ����ͨ��delete���ʽ������̬�ڴ�黹ϵͳ
	// ���ݸ�delete��ָ��,����ָ��̬������ڴ�,����һ����ָ��
	// �ͷ�һ�鲢��new������ڴ�,���߽���ͬ��ָ���ͷŶ��,����Ϊ��δ�����
	const int* ptr = new const int(1024);
	delete ptr;
	//������ָ�����͹�����ڴ�,ֱ����ʾ�ͷ�ǰ�����Ǵ��ڵ�
}

int main12() {
	
	
	return 0;
}
