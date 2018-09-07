#include<bits/stdc++.h>
using namespace std;

class Human{
	private:
		int age;
		string name;
	public:
		Human(){
			cout<<"constructor with no value passed"<<endl;
			age=0;
			name="Noname";
		}
		
			Human(string nname){
			cout<<"constructor with name passed"<<endl;
			age=0;
			name=nname;
		}
		
			Human(int aage){
			cout<<"constructor with age value passed"<<endl;
			age=aage;
			name="Noname";
		}
		
			Human(string nname,int aage){
			cout<<"constructor with name and age  passed"<<endl;
			age=aage;
			name=nname;
		}
		
		void display(){
			cout<<name<<endl<<age<<endl;
		}
};
int main()
{
	Human dixit;
	dixit.display();
	
	Human sawan("Sawan");
	sawan.display();
	
	Human priya(17);
	priya.display();
	
	Human raj("Raj", 12);
	raj.display();
	
	
	
}
