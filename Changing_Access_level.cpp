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

class Student : protected Person {
	/*
	--> all the public and protected member of the base class act as protected memeber in 
	    the derived class.
	*/
	public:
		// to extend the access level of the member we use scope resolution operator
		Person:: name;
		Person::setName;   
		
		void display(){
			cout<<name<<endl;
		}
		void setStudentName(string iname){
			setName(iname);
		}
};
int main(){
	
	Student dixit;
	dixit.name="Dixit";
	dixit.display();
	dixit.setName("Sawan");
	dixit.display();
	
}
