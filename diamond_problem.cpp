/*
Diamond problem--
  When Two class is inherited from a single base class and then there is another class
  which is inherited from both the base class and then we want to access some property of 
  the base class in the last subclass it gives an error because the property is ambiguious for 
  the class, the compiler is unable to decide from which class he access the property.
      
      
        ANIMAL
        /    \
       /      \
	  /        \
	LION      TIGER   ----> DIAMOND PROBLEM :-
	 \          /             we can't access the property of class ANIMAL
	  \        /               in the class LIGER. 
	   \      /        -----> SOLUTION :-
	    \    /                  Use the virtual inheritance.
	     LIGER
	
*/


#include<bits/stdc++.h>
using namespace std;
/*
// This gives an error... [Error] request for member 'walk' is ambiguous
class Animal {
	public:
		int age;
		Animal() {
			cout<<"Constructor from class Animal"<<endl;
		}
		void walk() {
			cout<<"Animal walks"<<endl;
		}
};

class Lion : public Animal {
	public:
		Lion(){
			cout<<"Constructor of class Lion"<<endl;
		}
};

class Tiger : public Animal {
	public:
		Tiger(){
			cout<<"Constructor of Class Tiger"<<endl;
		}
};

class Liger : public Lion,public Tiger {
	
};
*/

class Animal {
	public:
		int age;
		Animal() {
			cout<<"Constructor from class Animal"<<endl;
		}
		void walk() {
			cout<<"Animal walks"<<endl;
		}
};

class Lion : virtual public Animal {
	public:
		Lion(){
			cout<<"Constructor of class Lion"<<endl;
		}
};

class Tiger : virtual public Animal {
	public:
		Tiger(){
			cout<<"Constructor of Class Tiger"<<endl;
		}
};

class Liger : public Lion,public Tiger {
	public:
		Liger(){
			cout<<"Constructor of Class Liger"<<endl;
		}
};
int main()
{
	Liger l;
	l.walk();	
}
