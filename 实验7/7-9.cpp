#include<iostream>
using namespace std;

class Base{
public:
	int fn1()const{return 1;}
	int fn2()const{return 2;}
};

class Derived:private Base{
public:
	int fn1(){return Base::fn1();};
	int fn2(){return Base::fn2();};
};

int main(){
Derived d;
cout<<d.fn1()<<endl;
}