//Program 1: Write a program using switch case of a food shop menu which has:
//1.[B]urger  : (6000 riel per unit)
//2.[F]rench Fries  :  (2000 riel per pack)
//3.[P]izza	: 	(12000 riel per unit)
//4.[S]andwich 	:	(5000 riel per unit)
#include<stdio.h>

int main()
{
		int n,p,total;//n:represent the order number of food which's ordered.m represent the number of ordering
		printf("1.Burger\n");
		printf("2.French Fries\n");
		printf("3.Pizza\n");
		printf("4.Sandwiches\n");
		printf("Enter your choice: ");
		scanf("%d",&n);
		total = p*n;
		printf("Enter m: ");
		scanf("%d",&m);
		printf("the total = %d\n",total);
		
		if(n==1)
		{
			printf("you order is Burger with 6000 riel per unit");
		}
		else if(n==2)
		{
			printf("your order is French Fries with 2000 riel per pack");
		}
		else if(n==3)
		{
			printf("your order is Pizza with 12000 riel per unit");
		}
		else if(n==4)
		{
			printf("your order is Sandwiches with 5000 per unit");
		}
		else
		{
			printf("your order is invalid");
		}
 		
}
