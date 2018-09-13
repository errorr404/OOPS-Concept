#include<bits/stdc++.h>
using namespace std;

class Person {
	public:
		string name;
		// here we are going to create a class --> nested class
		// it is accessable in the Person class only so we have to access it through Person class.
		class Branch{
			public:
				string branch;
				int roll;
		};
		
		Branch it;
		void showBranch(){
			cout<<name<<endl<<it.branch<<endl<<it.roll;
		}
};
int main()
{
	Person dixit;
	dixit.name="Dixit";
	dixit.it.branch="IT";
	dixit.it.roll=42;
	dixit.showBranch();
	
	
}
