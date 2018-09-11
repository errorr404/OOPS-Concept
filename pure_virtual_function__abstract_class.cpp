#include<bits/stdc++.h>
using namespace std;

class Person {
	public:
		virtual void introduce() = 0;  // this is called pure virtual fucntion
		
	/*
	pure virtual function -> when any fuction is necessary to make in the derived class then
	we use pure virtal function for it, if we can't declear the introduce function in the derived
	class of the Person class then it gives an error.
	*/
	
	/*
	Abstract class-> Any class which has one or more pure virtual fucntion called abstract class
	** we can't declear the object of abstract class.
	*/
};

// we can't declear it in the Pearson class bcz it is pure virtual fucntion so using the scope
// resolution operator we declear it here.
void Person :: introduce() {
	cout<<"Hey from Person"<<endl;
}

class Student : public Person {
	public:
		// if we don't declear the introuce method it gives an error.
		void introduce(){
			cout<<"Hii form Student class"<<endl;
			Person::introduce();
		}
};
int main()
{
Student s;
s.introduce();
// Person p;	--> we can't do this bcz Person is abstract class.
}
