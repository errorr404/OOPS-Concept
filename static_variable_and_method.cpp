#include<bits/stdc++.h>
using namespace std;
class Human {
	public:
		static int human_count;
		Human(){
			human_count++;
		}
		
		void humanTotal(){
			cout<<"There are total "<<human_count<<" humans"<<endl;
		}
		
		static void humanCount(){
			// it only uses the static memebers not other members
		cout<<"There are total "<<human_count<<" humans"<<endl;	
		}
};

int Human::human_count = 0;
int main() {
	cout<<Human::human_count<<endl;
	Human a,b,c,d;
	a.humanTotal();
	Human::humanCount(); // bcz it is static we need to use the scope-resolution operator.
	cout<<Human::human_count<<endl;
}
