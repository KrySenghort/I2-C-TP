//Program1: write a program by using nested loop to display as the following:(for while and loop)
#include<stdio.h>

int main()
{
	int i=1,j,num;
	printf("Enter number of rows: ",num);
	scanf("%d",&num);
	printf("*********************************************************\n");
	while(i<=num)
	{
		j=1;
		while(j<=i)
		{
			printf("%d",j);
			j++;
		}
			printf("\n");
			i++;
	}
	printf("*********************************************************\n");	
	for(i<=num;i>=1;i-=1)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
			
		}
		printf("\n");
		
	}
	
	return 0;
}






//program2: Write a program to predict the day from year of 2000 up:
#include <stdio.h>

int main(int argv, char** arv) {
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char* day[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};   
    int d, m, y, i; 

    printf("Fill in a date after 01-01-1900 as dd-mm-yyyy: ");
    scanf("%d-%d-%d",  &d, &m, &y);
	
	
    if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
        month[1] = 29;

    if (y < 1900 || m < 1 || m > 12 || d < 1 || d > month[m - 1]) {
        printf("This is an invalid date.\n");
        return 1;
    }

    for (i = 1900; i < y; i++)
        if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
            d += 366;
        else
            d += 365;

    for (i = 0; i < m - 1; i++) 
        d += month[i];

    printf("This is a %s.\n", day[d % 7]);
    return 0;
}





//program3: Write a program using nested loop to display tree of two numbers:(do/while and for)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,rows;
    printf("Enter number of rows you want: ");
    scanf("%d",&rows);
    printf("Pyramid pattern 1\n");
    for (i=1; i<=rows; i++){
      for (j=1; j<=rows-i; j++)
	  {
      printf(" ");
  		}
	for(j=1; j<i; j++) {
	printf("%d ",j);
	}
  	printf("\n");
}	
getch();
    return 0;
}



	
	
	
	
	
	
	
	
	
