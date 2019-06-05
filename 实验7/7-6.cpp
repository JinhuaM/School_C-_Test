#include<iostream>
using namespace std;

class Mammal{
public:
	Mammal(){
	cout<<"Constructing Mammal"<<endl;
	}
	~Mammal(){
	cout<<"Destructing Mammal"<<endl;
	}
};

class Dog:public Mammal{
public:
	Dog(){
	cout<<"Constructing Dog"<<endl;
	}
	~Dog(){
	cout<<"Destructing Dog"<<endl;
	}
};

void main(){
	Dog dog;
}