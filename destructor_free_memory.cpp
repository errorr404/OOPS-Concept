#include<bits/stdc++.h>
using namespace std;
class Human {
	private:
		string *name;
		int *age;
	public:
		
		Human(string iname, int iage) {
			name = new string;
			age = new int;
			
			*name= iname;
			*age = iage;
		}
		void display() {
			cout<<"Hii i am "<<*name<<" and i am "<<*age<<" years old"<<endl;
		}
		
		~Human(){
			delete name;
			delete age;
			cout<<"all memories are released.";
		}
};
int main()
{
	Human *dixit = new Human("Dixit",21);
	dixit->display();
	
	delete dixit;
}
