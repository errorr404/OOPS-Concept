#include<bits/stdc++.h>
using namespace std;

class Person{
	protected:
		string name;
	public:
		void setName(string iname){
			name=iname;
		}
};

class Student : public Person {
	//--> public inheritance means the public member of the base class is available in the sub
	// class publically and the protected member is available in the subclass in protected form
	public:
		void display() {
			cout<<name<<endl;
		}
};

class Student1 : public Student {
	public:
		void displaya(){
			cout<<name<<endl;
		}
};
int main(){
	Student dixit;
	dixit.setName("Dixit");
	dixit.display();
	
	Student1 dd;
	dd.setName("DD");
	dd.display();
	dd.displaya();
}
