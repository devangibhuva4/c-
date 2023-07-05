#include<stdio.h>
#include<string.h>

struct employee{

   int emp_id;
   char emp_name[20];
   int	emp_age;
  int emp_role;
   int emp_city[20];
   char emp_std;
   int emp_school[20];
	
};

int main (){
	
	struct employee emp[20];
	int i;
	
	for(i=0; i<1; i++){
	
	printf("Enter Id :");
	scanf("%d",&emp[i].emp_id);
	
	
	printf("Enter name :");
	scanf("%s",&emp[i].emp_name);
	
	printf("Enter age :");
	scanf("%d",&emp[20].emp_age);
	
	
	printf("Enter role:");
	scanf("%s",&emp[i].emp_role);
	
	printf("Enter city :");
	scanf("%s",&emp[i].emp_city);
	
	printf("Enter std :");
	scanf("%d",&emp[i].emp_std);
	
	printf("Enter school :");
	scanf("%s",&emp[i].emp_school);
}
	
	for(i=0; i<1; i++){
		
		printf("%d\n",emp[i].emp_id);
		printf(" %d\n",emp[i].emp_age);
		printf("%d\n",emp[i].emp_std);
	
		printf("%s\n\n",emp[i].emp_name);
		printf("%s\n\n",emp[i].emp_role);
		printf("%s\n\n",emp[i].emp_city);
		printf("%s\n\n",emp[i].emp_school);
		
		
	}
	
	
	return 0;
}
