#include<bits/stdc++.h>
using namespace std;

class Human{
	string name;
	int age;
	public:
		Human(string n,int a)
		{
			name = n;
			age = a;
		}
		void tellme() {
			cout<<name<<endl<<age<<endl;
		}
		friend void display(Human man);  // for friend class--> friend class classname;
};

void display(Human man) {
	cout<<man.name<<endl<<man.age<<endl;
}
int main()
{
	Human dixit("Dixit",21);
	dixit.tellme();
	display(dixit);
}
