#include<stdio.h>
#include<conio.h>
#include<math.h>
void function1()
{
	printf("welcome to program 1\n");
}
double s(a,b,c,d,e,f,g,h,i,j)
{
	double square1=pow(a,2);
	double square2=pow(b,2);
	double square3=pow(c,2);
	double square4=pow(d,2);
	double square5=pow(e,2);
	double square6=pow(f,2);
	double square7=pow(g,2);
	double square8=pow(h,2);
	double square9=pow(i,2);
	double square10=pow(j,2);
	return square1,square2,square3,square4,square5,square6,square7,square8,square9,square10;
}
double c(k,l,m,n,o,p,q,r,s,t)
{	double cube1=pow(k,3);
	double cube2=pow(l,3);
	double cube3=pow(m,3);
	double cube4=pow(n,3);
	double cube5=pow(o,3);
	double cube6=pow(p,3);
	double cube7=pow(q,3);
	double cube8=pow(r,3);
	double cube9=pow(s,3);
	double cube10=pow(t,3);
	return cube1,cube2,cube3,cube4,cube5,cube6,cube7,cube8,cube9,cube10;
}
void function2()
{
	printf("welcome to program 2(MakeMileKmTable)\n");
}
double m(double kilometers)
{
	double miles= 1.61*kilometers;
	return miles;
}
void function3()
{
	printf("welcome to program 3\n");
}
int i(int j)   
{
	if(j%2==0) {printf("it is even number\n");}
	else       {printf("it is odd number\n");} 
	return ("it is even number\n");
	return ("it is odd number\n");
}
int main()
{
	char x;
	char y;
	char z;
	printf("welcome to my project\n");
	printf("1. Program 1\n");
	printf("2. Program 2\n");
	printf("3. Program 3\n");
	printf("Enter your choice: 1,2,3: \n");
	scanf("%c",&x);
	switch(x)
	{
		case'1':
			function1();
		{ 
printf("Table of number 1 to 10: 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10\n");
			double square1 = s(1,0,0,0,0,0,0,0,0,0);
			double square2 = s(0,2,0,0,0,0,0,0,0,0);
			double square3 = s(0,0,3,0,0,0,0,0,0,0);
			double square4 = s(0,0,0,4,0,0,0,0,0,0);
			double square5 = s(0,0,0,0,5,0,0,0,0,0);
			double square6 = s(0,0,0,0,0,6,0,0,0,0);
			double square7 = s(0,0,0,0,0,0,7,0,0,0);
			double square8 = s(0,0,0,0,0,0,0,8,0,0);
			double square9 = s(0,0,0,0,0,0,0,0,9,0);
			double square10 =s(0,0,0,0,0,0,0,0,0,10);
printf("The square of these numbers are:\n         %lf\n	 %lf\n	 %lf\n	 %lf\n	 %lf\n	 %lf\n	 %lf\n	 %lf\n	 %lf\n	 %lf\n",square1,square2,square3,square4,square5,square6,square7,square8,square9,square10);
			double cube1 = c(1,0,0,0,0,0,0,0,0,0);
			double cube2 = c(0,2,0,0,0,0,0,0,0,0);
			double cube3 = c(0,0,3,0,0,0,0,0,0,0);
			double cube4 = c(0,0,0,4,0,0,0,0,0,0);
			double cube5 = c(0,0,0,0,5,0,0,0,0,0);
			double cube6 = c(0,0,0,0,0,6,0,0,0,0);
			double cube7 = c(0,0,0,0,0,0,7,0,0,0);
			double cube8 = c(0,0,0,0,0,0,0,8,0,0);
			double cube9 = c(0,0,0,0,0,0,0,0,9,0);
			double cube10 =c(0,0,0,0,0,0,0,0,0,10);
printf("The cube of these numbers are:\n   	 %lf\n	 %lf\n	 %lf\n	 %lf\n	 %lf\n	 %lf\n	 %lf\n	 %lf\n	 %lf\n	 %lf\n",cube1,cube2,cube3,cube4,cube5,cube6,cube7,cube8,cube9,cube10);
		} 
	}
	scanf("%c",&y);
	switch(y)
	{
		case '2':
			function2();
			{
				double miles = m(2);
			    printf("the convert from kilometers to miles is %lf",miles);	  
			}
	}
	scanf("%c",&z);
	switch(z)
	{
		case '3':
			function3();
			{
				double j;
				printf("Enter the number: ");
				scanf("%lf",&j);
				printf("it is even or odd number");
			}
	}
	return 0;		
}
