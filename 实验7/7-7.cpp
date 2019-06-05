#include<iostream>
using namespace std;

class Base1{
public:
	Base1(int i){
		cout<<"Constructing Base1"<<i<<endl;
	}
	~Base1(){
	cout<<"Destructing Base1"<<endl;
	}
};

class Base2{
public:
	Base2(int i){
		cout<<"Constructing Base2"<<i<<endl;
	}
	~Base2(){
	cout<<"Destructing Base2"<<endl;
	}
};

class Derived:public Base1,public Base2{
public:
	Derived(int a,int b,int c,int d):Base1(a),member2(b),member1(c),Base2(d)
	{}
private:
	Base1 member1;
	Base2 member2;
};

int main(){
Derived obj(1,2,3,4);
return 0;
}
