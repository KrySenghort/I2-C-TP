#include<stdio.h>

//program1

int main()
{
	int num;
	printf("Enter a postive number:");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("bye!\n");
	}
	else if(num<100)
	{
		printf("this number is less than 100\n");
		
	
	}
	else 
	{
		printf("this number is not less than 100\n");
	}
		return 0;
	}



//program2
#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	float a,b,c,delta,root1,root2;
	printf("Enter a: ");
	scanf("%f",&a);
	printf("Enter b: ");
	scanf("%f",&b);
	printf("Enter c: ");
	scanf("%f",&c);
	delta=b*b-4*a*c;
	root1=(-b+sqrt(delta))/(2.0*a);
	root2=(-b-sqrt(delta))/(2.0*a);
	if(delta<0)
	{
		printf("roots is imaginary\n");

}
	else
	{
		printf("root1=%5.2f\n",root1);
		printf("root2=%5.2f\n",root2);
		
}
	return 0;
}


//Program3:
#include<stdio.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	if((num%5==0)&&(num%7==0)&&(num%2==0))
	{
		printf("it can be divided by 5 and 7");
	}
	else
	{
		printf("it cannot be devided by 5 and 7");
	}
	return 0;			
}
