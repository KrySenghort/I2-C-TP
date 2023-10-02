//function: void fuction Vs return function(int, double, char, string)
#include<stdio.h>
void demo()
{
	printf(" This is in void demo function\n");
}
//void function(intro)
void intro()
{
	printf(" My name is messi!\n");
	printf(" I love football\n");
}
int sum2num(int a, int b)
{
	int  sum2num = a+b;
	return sum2num;
}
double rectangle(double i, double j)
{
	double area1 = i*j;
	return area1;
}
double triangle(double base, double height)
{
	double area2 = base*height*0.5;
	return area2;
}
double circle(double rayon)
{
	double area3 = 3.14*rayon*rayon;
	return area3;
}
int main()
{
	demo();
	intro();
	printf(" This is main function\n");
	//printf("The sum of %d and %d is = %d\n",sum2num(30,45));
	double area1=rectangle(34,40);
	printf("The surface of rectangle is %lf\n",area1);
	double area2=triangle(22,33);
	printf("The surface of triangle is %lf\n",area2);
	double area3=circle(3);
	printf("The surface of circle is %lf\n",area3);
	return 0;
}

