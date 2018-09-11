#include<bits/stdc++.h>
using namespace std;

class Person{
	public:
		/* if we can't use virtual fuction then it will call the introduce method from Person class
			 in the whoisThis fucntion because the object received is type of person class..
			 but when we use virtual keyword then it will find that the derive class has the introduce()
			 function or not, if it is available then it will execute the derive class function otherwise
		   it will execute the base class function */
		   
			    virtual	void introduce(){
			cout<<"Hii from person"<<endl;
		}
};

class Student : public Person{
	public:
		void introduce(){
			cout<<"Hii from Student"<<endl;
		}
};

class Farmer : public Person{
	public:
	  
};

void whoisThis(Person &p) {
	p.introduce();  
}
int main()
{
	Student dixit;
	Farmer dd;
	whoisThis(dixit);
	whoisThis(dd);
}
