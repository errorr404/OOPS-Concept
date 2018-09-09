#include<bits/stdc++.h>
using namespace std;
class Person{
	public:
		string name;
		int age;
		void setName(string iname) {
			name = iname;
		}
			void setAge(int iage) {
			age = iage;
		}
};
// inheritance --> using the feature of one class into another class

class Student : public Person {
	public:
		int id;
		void setId(int iid) {
			id=iid;
		}
		void introduce(){
			cout<<"I am "<<name<<". i am "<<age<<" years old"<<" my id is "<<id<<endl;
		}
};

int main()
{
	Student dixit;
	dixit.setName("Dixit");
	dixit.setAge(21);
	dixit.setId(337);
	dixit.introduce();
}
