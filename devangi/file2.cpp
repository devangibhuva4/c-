#include<iostream>
#include<string.h>

 using namespace std;
 
 class house{
 	    public :
 	    int house_no,rooms;
 	    char soc[100];
 };
 int main()
 {
 	
 	house h1;
 	
 	cout<<"enter house no =";
 	cin>>h1.house_no;
 	
 	cout<<"enter rooms no =";
 	cin>>h1.rooms;
 	
 	cout<<"enter house soc =";
 	cin>>h1.soc;
 	
 	cout<<h1.house_no<<'end1'<<h1.rooms<<'end1';
 	
 	
 	
 }
 
