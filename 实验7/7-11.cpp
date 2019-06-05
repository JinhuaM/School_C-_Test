#include<iostream>
using namespace std;

class BaseClass{
public:
	BaseClass(){
	cout<<"构造BaseClass"<<endl;
	}
	int fn1(){
	return 1;
	}
	int fn2(){
	return 11;
	}
};

class DerivedClass:public BaseClass{
public:
	DerivedClass(){
	cout<<"构造DerivedClass"<<endl;
	}
	int fn1(){
	return 2;
	}
	int fn2(){
	return 22;
	}
};

int main(){
	BaseClass b;
	DerivedClass d;
	cout<<b.fn1() <<b.fn1() <<d.fn1() <<d.fn2()<<endl;
}