

#include<stdio.h>

int main()
{
    int c,r;
     
     for(r=1 ; r<=5; r++ ){
        for(c=r; c>=1; c--){
            if(c%2==0){
            	printf("0");
			}
			else{
				printf("1");
			}
			     
        }
         
        printf("\n"); 
     }
     
  
    return 0;
}
