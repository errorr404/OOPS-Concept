#include<bits/stdc++.h>
using namespace std;

class Father{
	protected:
		int height;
	public:
		Father(){
			cout<<"Father class constructor is called"<<endl;
		}
};

class Mother{
	protected:
		string color;
	public:
		Mother(string c){
			color = c;
			cout<<"Mother class constructor is called"<<endl;
		}
};

class Child : public Father,public Mother {
	public:
		Child(int h, string c) : Father(),Mother(c) {
			height = h;
			cout<<"Child class constructor is called"<<endl;
		}
		void display(){
			cout<<"Height is "<<height<<" color is "<<color<<endl;
		}
};
int main()
{
	Child cc(6,"White");
	cc.display();
}
