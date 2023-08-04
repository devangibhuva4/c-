#include<iostream>
#include<string.h>

using namespace std;

class animal{
	public :
		int age;
		char name[80];
		char origing[80];
		
		void set(){
			cout<<"name = "<<endl;
			cin>>name;
			cout<<"age = "<<endl;
			cin>>age;
			
		}
};
class zebra{
	public :
		int age;
		char name[80];
		
		void sedata(){
			cout<<"name = "<<endl;
			cin>>name;
			cout<<"age = "<<endl;
			cin>>age;
			
		}
};

class dolphin :public zebra,public animal{
	
	public :
		void get(){
			cout<<"origing = "<<endl;
			cin>>origing;
		}
};

int main(){
	
	dolphin h3;
	h3.set();
	h3.get();
    
}
