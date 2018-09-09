#include<bits/stdc++.h>
using namespace std;

class Father {
	public:
		int height;
		void askfather(){
			cout<<"I am your father, ask me anything"<<endl;
		}
};

class Mother {
	public:
		string colour;
		void askmother(){
			cout<<"I am your mother, ask me anything"<<endl;
		}
};

// here we use multiple inheritance

class Child : public Father, public Mother {
	public:
		void setChild(string icolor, int iheight) {
			colour= icolor;
			height = iheight;
		}
		void display(){
			cout<<"Height is "<<height<<" color is "<<colour<<endl;
		}
};
int main()
{
	Child dixit;
	dixit.setChild("Brown", 6);
	dixit.display();
	dixit.askfather();
	dixit.askmother();
}
