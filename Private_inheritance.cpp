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

class Student : private Person{
	
	// all the members of the base class is available here as a private member.
	public:
		void display(){
			cout<<name<<endl;
		}
		void studentsetname(string iname){
			setName(iname);
		}
};

class Gstudent: public Student {
	
	// name is not assessble here bcz it is private in class Student
	public:
		void setGstudentName(string iname){
			studentsetname(iname);
		}
};
int main(){
	Gstudent dixit;
	dixit.setGstudentName("Dixit");
	dixit.display();
}
