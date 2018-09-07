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
	Human dixit,sawan;
	dixit.name = "Dixit";
	sawan.name = "Sawan";
	dixit.introduce();
	sawan.introduce();
}
