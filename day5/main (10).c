
#include <stdio.h>

int main()
{
    float fahrenheit;
    float celsius;
    
    printf("enter value");
    scanf("%f",& celsius);
    
    fahrenheit = (celsius*9/5) + 32;
    
    printf("fahrenheit = %.2f " , fahrenheit);
    
    

    return 0;
}
