// this keyword points the same object in which it is used.

#include<bits/stdc++.h>
using namespace std;

class Person{
	int age;
	public:
		void setAge(int age){
			//age=age;  //--> if we use this it produce garbage value
			this->age = age; // here the left side age pointed by the same object and right side age is a passed value

		}
		void showAge(){
			//cout<<age //--> both the statement gives the same o/p
			cout<<this->age;
		}
};
int main()
{
	Person dixit;
	dixit.setAge(21);
	dixit.showAge();
}
