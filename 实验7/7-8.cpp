#include<iostream>
#include<string>
using namespace std;

class Document{
public:
	Document(char *n){
	strcpy(name,n);
	}
	void show(){
	cout<<name;
	}
private:
	char name[50];
};

class Book:public Document{
public:
	Book(char*n,int p):Document(n),page(p){}
	void show(){
	cout<<"Book:";
	Document::show();
	cout<<endl<<"page:"<<page<<endl;
	}
private:
	int page;
};

int main(){
Book b("¿ñÈËÈÕ¼Ç",300);
b.show();
}