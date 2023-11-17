/*
* ���һ������Ҫ�Զ�����������,�������Կ϶���Ҳ��Ҫ�Զ��忽����ֵ������Ϳ������캯��
* ���һ������Ҫһ���������캯��,�������Կ϶���Ҳ��Ҫһ��������ֵ����� ��֮��Ȼ
* ��������Ҫ�������캯��������Ҫ������ֵ�����������Ȼ��ζ��Ҳ��Ҫ��������
*/
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Foo
{
public:
	//���õ��ǿ������캯�����Ǹ�ֵ���������Ҫ�ǿ��Ƿ����µĶ���ʵ��������
	//����������µĶ���ʵ�����ǵ��õľ��ǿ������캯�������û�У��Ǿ��Ƕ����еĶ���ֵ�����õ��Ǹ�ֵ�������
	Foo();
	// �������캯������
	//�������캯���ĵ�һ�������������������� ��Ϊ �������캯����������ʼ�������������Ͳ���
	// �������캯��ͨ����Ӧ����explicit��
	// ����/�ƶ����캯�������Ǵ����ҿɷ��ʵ�. ����,������private��
	/*
	* �������캯��Ӧ�ó���
	* һ����Ķ����ʼ�������һ������  ps:ע��ؼ��� ��ʼ��
	* ��һ��������Ϊʵ�δ��ݸ�һ�����������͵Ķ���
	* ��һ����������Ϊ���������͵ĺ�������һ������
	* �û����ų�ʼ��һ�������е�Ԫ�ػ�һ���ۺ����еĳ�Ա
	*/
	Foo(const Foo&);

	/*
	* ���������ͷŶ���ʹ�õ���Դ,�����ٶ���ķ�static���ݳ�Ա
	* û�з���ֵ,Ҳ�����ܲ���
	* ��Ϊ���ܱ�����,����һ��������,ֻ����Ψһһ����������
	* ������������,����ִ�к�����,Ȼ�����ٳ�Ա, ��Ա����ʼ��˳�����������
	* 
	* ���ۺ�ʱ,һ����������,�ͻ��Զ���������������
	* ����������������ֱ�����ٳ�Ա,���������ٹ�����,��������������Ϊ��Ա���ٲ���֮�����һ���ֶ����е�
	*/
	~Foo();

	// ����Կ����������θ�ֵ
	// ��ֵ�����ͨ������һ��ָ�������������������
	Foo& operator = (const Foo&);

private:
	string name;
	int age = 0;
};

Foo::Foo() { }
Foo::Foo(const Foo &c):name(c.name),age(c.age)
{// �������캯����

}

Foo::~Foo()
{
}

Foo& Foo::operator=(const Foo& rhs) {
	age = rhs.age;
	return *this;
}
void InitInfo() {
	/*
	* ֱ�ӳ�ʼ���Ϳ�����ʼ��
	* ֱ�ӳ�ʼ���Ժ�����ʽ
	* ������ʼ����" = "��ʽ
	*/
	string dots(4, 'd'); // ֱ�ӳ�ʼ��
	string s1 = "kaobei";

	// ������ֵ�����
	Foo man, man2;
	man = man2;

}

/*
* Ϊ�˶��忽������,������ѡ��
* ʹ�����Ϊ��������һ��ֵ������һ��ָ��
* ʹ�����Ϊ��������һ��ֵʱ,������ԭ��������ȫ������
* ʹ�����Ϊ��������һ��ָ��ʱ,����ʹ����ͬ�ĵײ�����
*/

class HasPtr
	//������Ϊ����ֵ����
{
public:
	HasPtr();
	HasPtr(const string& s = string()) :
		ps(new string(s)), i(0) {};
	HasPtr(const HasPtr& p) :
		ps(new string(*p.ps)), i(p.i) {};
	HasPtr& operator=(const HasPtr&);
	~HasPtr();

private:
	string* ps;
	int i;
};

HasPtr::HasPtr()
{
}
HasPtr& HasPtr::operator=(const HasPtr& rhs) {
	auto newp = new string(*rhs.ps);
	delete ps;
	ps = newp;
	i = rhs.i;
	return *this;
}
HasPtr::~HasPtr()
{
	delete ps;
}


class HasPtr2
	// ������Ϊ����ָ�����
{
public:
	HasPtr2();
	HasPtr2(const string& s = string()) :
		ps(new string(s)), i(0), use(new size_t(1)) {};
	HasPtr2(const HasPtr2&p):
		ps(p.ps), i(p.i), use(p.use) {
		++*use;
	}
	HasPtr2& operator=(const HasPtr2&);
	~HasPtr2();

private:
	string* ps;
	int i;
	size_t* use; //������¼�ж��ٸ�����*ps�ĳ�Ա
};

HasPtr2::HasPtr2()
{
}

HasPtr2& HasPtr2::operator=(const HasPtr2& rhs2) {
	++*rhs2.use;
	if (--*use == 0) {
		delete ps;
		delete use;
	}
	ps = rhs2.ps;
	i = rhs2.i;
	use = rhs2.use;
	return *this;

}

HasPtr2::~HasPtr2()
{
	if (--*use == 0) {
		delete ps;
		delete use;
	}
}

int main() {
	return 0;
}
