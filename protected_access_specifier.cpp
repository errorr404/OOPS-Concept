/*
---> Protected data can be used in the class and subclass but not used outside of these two.
*/


#include<bits/stdc++.h>
using namespace std;

class Person{
	protected:
		string name;
	public:
		void setName(string iname) {
			name=iname;
		}
};

class Student : public Person {
	public:
		void display() {
			cout<<name<<endl;
		}
};
int main()
{
	Student dixit;
	dixit.setName("Dixit");
	dixit.display();
}
