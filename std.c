#include <stdio.h>
struct details
{
	char name[100];
    long long int roll;
	char mentordept[100];
	char colladd[100];
	long long int mob;
}s[5];
int main()
{
	int i;
	for(i=0;i<2;i++)
	{
	printf("\nDetails of student: %d\n\n",i+1);
	printf("\nEnter Student Name: \n");
	gets(s[i].name);
	
	printf("Enter Roll No: \n");
	scanf("%d",&s[i].roll);
	getchar();
	
	printf("Enter mentor dept: \n");
	gets(s[i].mentordept);
	
	
	
	printf("Enter College Address: \n");
	gets(s[i].colladd);
	
	
	printf("Enter mobile no: \n");
	scanf("%d",&s[i].mob);
	getchar();
    }
	//Displaying Information
	for(i=0;i<2;i++)
	{
		printf("\nDetails of students : %d\n",i+1);
		
		printf("\nStudent name: \n");
		puts(s[i].name);
		
		printf("\nRoll No : %d \n",s[i].roll);
		
		printf("\nMentor Department: \n");
		puts(s[i].mentordept);
	
		printf("\nCollege Address: \n\n");
		puts(s[i].colladd);
		
		printf("\nMobile no: %d \n",s[i].mob);
	    
		
	}
	return 0;

}
