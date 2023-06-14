#include <stdio.h>

int main(){
	
	int r,c;
	char a='A';
	
	for(r=5;r>=1;r--){
		for(c=5;c>=r;c--){
			printf("%c",a);
			a++;
			
			
		}
		printf("\n");
	}
	
	return 0;
}
