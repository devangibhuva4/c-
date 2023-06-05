#include<stdio.h>

int main(){
     
     int a;
     int b;
     
     printf("enter first");
     scanf("%d",&a);
     
     printf("enter second");
     scanf("%d",&b);
     
     printf("minimum no");
     
     if(a>b){
         
         printf("%d",b);
         
     }
     else{
         
         printf("%d",a);
         
     }
     
    return 0;
}
