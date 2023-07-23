 #include<iostream>

 using namespace std;
 
 class time{
 	
 	public
 	int h,m,s;
 };
 
 int time()
 {
 	time t;
 	
 	cout<<"enter second :";
 	cin>>t.s;
 	
 	while(t.s>60)
 	{
 		
 		t.m++;
 		t.s-=60;
 		
	 }
	  
	  while(t.m>60)
	  {
	  	t.h++;
	  	t.m-=60;
	  }
	  cout<<"sum: "<<t.h<< "<<t.m<<" "<<t.s<<end1;
 }
