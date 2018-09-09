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
		void display(){
			cout<<name<<endl;
		}
		void setStudentName(string iname){
			setName(iname);
		}
};
int main(){
	
	Student dixit;
	//dixit.setName("Dixit")  //--> give an error becauese it is protected member of Student class
	dixit.setStudentName("Dixit");
	dixit.display();
}
