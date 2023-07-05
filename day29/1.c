#include<stdio.h>
#include<string.h>

struct student{
	
   int stu_id;
   char stu_name[20];
    int	stu_age;
	char stu_cours[20];
	int stu_city[20];
	char stu_std;
	int stu_school[20];
	
};

int main (){
	
	struct student stu[20];
	int i;
	
	for(i=0; i<=4; i++){
	
	printf("Enter Id :");
	scanf("%d",&stu[i].stu_id);
	
	
	printf("Enter name :");
	scanf("%s",&stu[i].stu_name);
	
	printf("Enter age :");
	scanf("%d",&stu[i].stu_age);
	
	
	printf("Enter cours:");
	scanf("%s",&stu[i].stu_cours);
	
	printf("Enter city :");
	scanf("%s",&stu[i].stu_city);
	
	printf("Enter std :");
	scanf("%d",&stu[i].stu_std);
	
	printf("Enter school :");
	scanf("%s",&stu[i].stu_school);
}
	
	for(i=0; i<=4; i++){
		
		printf("%d\n",&stu[i].stu_id);
		printf("%d\n",&stu[i].stu_age);
		printf("%d\n",&stu[i].stu_std);
	
		printf("%s\n\n",stu[i].stu_name);
		printf("%s\n\n",stu[i].stu_cours);
		printf("%s\n\n",stu[i].stu_city);
		printf("%s\n\n",stu[i].stu_school);
		
		
	}
	
	
	return 0;
}
