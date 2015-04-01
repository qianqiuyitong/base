#include<iostream>
#include<string>
using namespace std;

class A
{
	private:
		string name;
	public:
	A(string name):name(name){cout<<"A construct"<<endl;}
	~A(){cout<<"A analysis"<<endl;}
};

class B:public A
{
	private:
		int age;
	public:
		B(string name,int age):A(name),age(age){cout<<"B construct"<<endl;}
		~B(){cout<<"B analysis"<<endl;}
};

int main()
{
	B b("xiaoming",20);
	return 0;
}
