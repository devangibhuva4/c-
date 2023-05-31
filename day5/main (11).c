
#include <stdio.h>

int main()
{
    int a;
    int b;
    
    printf("enter value of a=\n");
    scanf("%d",&a);
    printf("enter value of b=\n");
    scanf("%d",&b);
    
    a = a+b;
    b =a-b;
    a =a-b;
    
    printf("A =%d\n",a);
    printf("B =%d\n",b);
    
   
    

    return 0;
}
