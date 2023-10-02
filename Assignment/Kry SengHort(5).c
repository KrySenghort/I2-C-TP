//Write a C program to ask a user for 20 scores then
//Find the average of those scores
//Show the scores that are greater than the average
//Count number of students who got score more than average

#include<stdio.h>
#include<math.h>

int main()
{
	int n[20];
	int i,average,sum=0,greater=0;
	for(i=0;i<=19;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&n[i]);
		sum=sum+n[i];
	}

		average=sum/20;
		printf("The average is %d\n",average);
	for(i=0;i<=19;i++)
	{
		if(n[i]>average)
		{
			printf("The number are greater than average are %d\n",n[i]);
		}
	}
	for(i=0;i<=19;i++)
	{
		if(n[i]<=average)
		{
			printf("it has no greater numbers:\n",greater);
		}
		else 
	{
	
			greater++;
	}
		printf("the greater numbers have: \n",greater);
	}
	
		
		return 0;
}
