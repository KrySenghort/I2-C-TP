//Program1:  Write a program in C program to store data of 5 students. Each student has name, score, email and phone number. The program ask user for info of these 5 students.
//Display all students' information on screen.
#include<stdio.h>
int main()
{
	char name[20][100];
	int phone_number[40];
	float score[20];
	char email[60][100];
	int n=5,i,j;
	printf("The number of students is %d\n",n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter student %d information\n",i+1);
		printf("Enter name: \n");
		scanf("%s",&name[i]);
		printf("Enter score: \n");
		scanf("%f",&score[i]);
		printf("Enter email: \n");
		scanf("%s",&email[i]);
		printf("Enter phone number: \n");
		scanf("%d",&phone_number[i]);
	}
	//Display record********
	printf("*****************************************************************************************************************************\n");
	printf("*****************************************************************************************************************************\n");
	printf("The Collections of these 5 students's datas and informations are displayed in each following:\n");
	printf("Name\t\t\t\tscore\t\t\t\t\temail\t\t\t\t\tphone_number\n");
	printf("\n");
	for(j=0;j<=n-1;j++)
	{
		printf("%s\t\t\t\t%f\t\t\t\t%s\t\t\t\t%d\n",name[j],score[j],email[j],phone_number[j]);
	}
	return 0;
}
//********************************************************************************************************************************************
//********************************************************************************************************************************************
//********************************************************************************************************************************************
//Program2:  Same as PROGRAM1. Find average score.
//The program display info of all students who got scores more than average.
//Input data
//Find average score (5 students, sum/5)
//Display students who score>= average
#include<stdio.h>
#include<math.h>

int main()
{
	int n[5];
	double average;
	int i,score=0,greater=0;
	for(i=0;i<=4;i++)
	{
		printf("Enter score %d: ",i+1);
		scanf("%d",&n[i]);
		score=score+n[i];
	}
	average=score/5;
	printf("The average is %f\n",average);
	
   // finding numbers greater than average
   printf("\nthe numbers where are greater than average are:\n");
   for(i=0; i<=4; i++)
   {
    if(n[i]>average) 
    {
	 printf("%d\t\n",n[i]);
    }

	}
	return 0;
}
//*****************************************************************************************************************************
//*****************************************************************************************************************************
//*****************************************************************************************************************************
//Program3:
//Write a program in C program store data of 6 employees. 
//Each employee has name, gender, salary, and phone number. 
//The program ask user for info of these 6 employees. 
//The program ...
//a) Display info of employee who got the highest salary.
//b) Display info of employee who got the lowest salary.
//c) Display info of all semployees whose gender are male.
//d) Display info of all employees who have salary more than the average.
#include<stdio.h>
int main()
{
	char name[20][100];
	char gender[10][20];
	double salary[20];
	double total_salary;
	int phone_number[60][100];
	int n=6,i;
	double average;
	printf("The number of employee is %d\n",n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter employee %d informations\n",i+1);
		printf("Enter name: \n");
		scanf("%s",&name[i]);
		printf("Enter gender: \n");
		scanf("%s",&gender[i]);
		printf("Enter salary: \n");
		scanf("%lf",&salary[i]);
		printf("Enter phone number: \n");
		scanf("%d",&phone_number[i]);
	}
	//Display record********
	printf("**********************************************************************************************\n");
	printf("**********************************************************************************************\n");
	 double max = salary[0];
     double min = salary[0];
	for(i=0;i<=n-1;i++)
	{
		if(salary[i]>max)
		{
			max = salary[i];
		}
		if(salary[i]<min)
		{
			min = salary[i];
		}
	}

		printf("Maximum salary is = %f\n", max);
    	printf("Minimum salary is = %f\n", min);
    	return 0;
}
