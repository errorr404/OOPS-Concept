#include<bits/stdc++.h>
using namespace std;

class Human {
	public:
		string name;
		void introduce() {
			cout<<"My name is "<<name<<endl;
		}
};
int main()
{
	Human dixit; // it will create an object in the stack
	Human *sawan = new Human; // it will create the dynamic object and stored in the heap
	
	dixit.name = "Dixit";
	dixit.introduce();
	// to access the properties of the dynamic object we use arrow operator bcz it is a pointer
	sawan->name = "Sawan";
	sawan->introduce();
}
