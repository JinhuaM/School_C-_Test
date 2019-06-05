#include<iostream>
using namespace std;

class Object{
public:
	Object(){
	cout<<"构造函数 Object"<<endl;
	}
	~Object(){
	cout<<"析构函数 Object"<<endl;
	}
	void setWeight(int w){
	weight=w;
	}
	int getWeight(){
	return weight;
	}
private:
	int weight;
};

class Box:public Object{
public:
	Box(){
	cout<<"构造Box"<<endl;
	}
	~Box(){
	cout<<"析构Box"<<endl;
	}
	void setHeight(int h){
	height=h;
	}
	int getHeight(){
	return height;
	}
	void setWidth(int w){
	width=w;
	}
	int getWidth(){
	return width;
	}
private:
	int height,width;
};

int main(){
	Box box;
	box.setHeight(1);
	box.setWeight(2);
	box.setWidth(3);
	cout<<"height:"<<box.getHeight()<<"  weight:"<<box.getWeight()<<"  width:"<<box.getWidth()<<endl;
}