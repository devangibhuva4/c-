#include<iostream>
#include<string.h>

using namespace std;
class Distance{
	 public :
	 	int feet;
	 	int inch;
	
};

int main(){
	Distance d,d1,sum;
	
	cout<<"enter feet1 =";
	cin>>d.feet;
	cout<<"enter inch1 =";
	cin>>d.inch;
	
	cout<<"enter feet2 =";
	cin>>d1.feet;
	cout<<"enter inch2 =";
	cin>>d1.inch;
	
	sum.feet = d.feet + d1.feet;
	sum.inch = d.inch + d1.inch;
	
	while(sum.inch>12)
	{
		sum.feet++;
		sum.inch=12;
	}
	
	cout<<"feet = "<<sum.feet<<"inch = "<<sum.inch<<'end1';
}
