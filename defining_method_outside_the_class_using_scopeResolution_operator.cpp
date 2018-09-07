#include<bits/stdc++.h>
using namespace std;

class Human {
	public:
		string name;
		void introduce();
};

// for declearing the introduce method we use the scope-resolution (::) operator

void Human::introduce() {
	cout<<"My nam is "<<Human::name<<endl; // to access the variables from the calss we need to use the scope-resoultion operator

} 
int main()
{
	Human dixit,sawan;
	dixit.name = "Dixit";
	sawan.name = "Sawan";
	dixit.introduce();
	sawan.introduce();
}
