#include<stdio.h>

void sum(int a,int b){
	
  printf("sum :%d\n\n",a+b);
  
}
void min(int a,int b){
	
  printf("min :%d\n\n",a-b);
  
}
void multi(int a,int b){
	
  printf("multi:%d\n\n",a*b);
  
}
void divi(int a,int b){
	
  printf("divi :%d\n\n",a/b);
  
}


int main(){
	
  int a,b;
  char sign;
  
  while(1){
  	
  	printf("Enter first value :");
  	scanf("%d",&a);
  	
  	printf("Enter second value :");
  	scanf("%d",&b);
  	
  	printf("+ , -, *, /\n\n");
  	
  	printf("Make your selection  ");
  	scanf(" %c",&sign);
  	
  	
  	switch(sign){
  		case '+':
  		sum(a,b);
		break; 
		
		case '*':
  		multi (a,b);
		break;                             
  	
	  
	  case '/':
  		divi(a,b);
		break;                             
  	
	 case '-':
  		min(a,b);
		break;                             
  	 
    }    

  	
  }


   return 0;	
}

