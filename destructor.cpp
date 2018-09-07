#include<bits/stdc++.h>
using namespace std;

class Human {
	public:
		Human() {
			cout<<"Constructor called"<<endl;
		}
		
		~Human() {
			cout<<"Destructor is called";
		}
};
int main()
{
	Human *dixit;
     dixit = new Human();
     
     delete dixit;
}
