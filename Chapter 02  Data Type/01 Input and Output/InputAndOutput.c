/*1. Write a program that converts Centigrade to Fahrenheit. Go to the editor
Expected Output :
Input a temperature (in Centigrade): 45
113.000000 degrees Fahrenheit.*/
//*****************************************************************************************************************************
/*#include<stdio.h>
int main(){
	float c,f;
	printf("Enter a temperature (centigrade): ");
	scanf("%f",&c);
	f=c*2.511;
	printf("the temperature in fahrenheit is %f\n",f);	
	return 0; }*/
/*==> Output:
			Enter a temperature (centigrade): 45
			the temperature in fahrenheit is 112.995003
			-------------------------------------------------------------------------------
			Process exited after 3.349 seconds with return value 0
			Press any key to continue . . .                           */
//*****************************************************************************************************************************
/*2. Write a C program that calculates the volume of a sphere. Go to the editor
Expected Output :
Input the radius of the sphere : 2.56
The volume of sphere is 70.276237.*/
#include<stdio.h>
#include<math.h>
int main(){
	float radius,volume;
	printf("Enter the radius of the sphere: ");
	scanf("%f",&radius);
	volume=1.333333*pow(radius,3)*3.14;
	printf("the volume of sphere is defined by %f\n",volume);
	return 0; }
/*==> Output: 
            Enter the radius of the sphere: 2.56
			the volume of sphere is defined by 70.240585
			------------------------------------------------------------------------------
			Process exited after 11.94 seconds with return value 0
			Press any key to continue . . .         */
//*****************************************************************************************************************************
/*3. Write a C program that prints the perimeter of a rectangle to take its height and width as input. Go to the editor
Expected Output :
Input the height of the Rectangle : 5
Input the width of the Rectangle : 7
Perimeter of the Rectangle is : 24.000000 */
/*#include<stdio.h>
int main(){
	int height,width;
	double perimeter;
	printf("Enter height and width: ");
	scanf("%d  %d",&height,&width);
	perimeter = (height+width)*2;
	printf("the perimeter of this rectangle is %lf\n",perimeter);
	return 0; }*/
/*==> Output :
        Enter height and width: 5  7
the perimeter of this rectangle is 24.000000
-------------------------------------------------------------------------------------------
Process exited after 12.42 seconds with return value 0
Press any key to continue . . .  */
//*****************************************************************************************************************************
/*4. Write a C program that converts kilometers per hour to miles per hour. Go to the editor
Expected Output :
Input kilometers per hour: 15
9.320568 miles per hour  */
/*#include<stdio.h>
#include<math.h>
int main(){
	int kilometer;
	float mile;
	printf("Enter kilometer per hour: ");
	scanf("%d",&kilometer);
	mile = 9.320568*kilometer/15;
	printf("%f mile per hour",mile);
	return 0; } */
/* Output: 
		Enter kilometer per hour: 15
		9.320568 mile per hour
		----------------------------------------------------------------------------------
		Process exited after 2.653 seconds with return value 0
		Press any key to continue . . .          */
//****************************************************************************************************************************
/*5. Write a C program that takes hours and minutes as input, and calculates the total number of minutes. Go to the editor
Expected Output :
Input hours: 5
Input minutes: 37
Total: 337 minutes.*/
/*#include<stdio.h>
#include<conio.h>
int main(){
	int hours;
	int minutes;
	fflush(stdin);
	printf("Input hours: "); 	scanf("%d",&hours);
	printf("Input minutes; ");  scanf("%d",&minutes);
	int total = minutes + 60*hours;
	printf("Total: %d\n",total);	
	return 0; } */
/*==> Output: 
Input hours: 5
		Input minutes; 37
		Total: 337
		----------------------------------------------------------------------------------
		Process exited after 9.258 seconds with return value 0
		Press any key to continue . . .  */
//****************************************************************************************************************************
/*6. Write a program in C that takes minutes as input, and display the total number of hours and minutes. Go to the editor
Expected Output :
Input minutes: 546
9 Hours, 6 Minutes  */
/*#include<stdio.h>
int main(){
	int minutes,Hours,Minutes;
	printf("Input minutes: "); scanf("%d",&minutes);
	Hours = minutes/60;
	Minutes = minutes - Hours*60;
	printf("%d Hours, %d Minutes",Hours,Minutes);	
	return 0; } */
/* Output: 
		Input minutes: 546
		9 Hours, 6 Minutes
		--------------------------------
		Process exited after 2.626 seconds with return value 0
		Press any key to continue . . .  */
//****************************************************************************************************************************
/*7. Write a program in C that reads a forename, surname and year of birth and display the names and the year one after another sequentially. Go to the editor
Expected Output :
Input your firstname: Tom
Input your lastname: Davis
Input your year of birth: 1982
Tom Davis 1982 */
/*#include<stdio.h>
int main(){
	char firstname[10];
	char lastname[10];
	int year_of_birth; 
	printf("Input your firstname: ");  scanf("%s",&firstname);
	printf("Input your lastname: ");  scanf("%s",&lastname);
	printf("Input your year of birth: ");  scanf("%d",&year_of_birth);
	printf("%s %s %d\n",firstname,lastname,year_of_birth);
	return 0; } */
/* Output: 
		Input your firstname: Tom
		Input your lastname: Davis
		Input your year of birth: 1982
		Tom Davis 1982
		----------------------------------------------------------------
		Process exited after 18.77 seconds with return value 0
		Press any key to continue . . .       */
//****************************************************************************************************************************
/*8. Write a program in C to calculate the sum of three numbers with getting input in one line separated by a comma. Go to the editor
Expected Output :
Input three numbers separated by comma : 5,10,15
The sum of three numbers : 30 */
/*#include<stdio.h>
int main(){
	int a,b,c;
	printf("Input three numbers separated by comma : "); scanf("%d,%d,%d",&a,&b,&c);
	int sum = a+b+c;	
	printf("The sum of three numbers is : %d",sum);	
	return 0; } */
/* Output: 
		Input three numbers separated by comma : 5,10,15
		The sum of three numbers is : 30
		-----------------------------------------------------------------
		Process exited after 12.79 seconds with return value 0
		Press any key to continue . . .    */
//****************************************************************************************************************************
/*9. Write a C program to perform addition, subtraction, multiplication and  division of two numbers. Go to the editor
Expected Output :
Input any two numbers separated by comma : 10,5
The sum of the given numbers : 15
The difference of the given numbers : 5
The product of the given numbers : 50
The quotient of the given numbers : 2.000000    */
/*#include<stdio.h>
int main(){
	int num1,num2;
	printf("Input any two numbers separated by comma: "); scanf("%d,%d",&num1,&num2);
	int sum = num1+num2;
	int substraction = num1-num2;
	int multiplication = num1*num2;
	float division = num1/num2;
	printf("The sum of the given numbers : %d\n",sum);
	printf("The difference of the given numbers : %d\n",substraction);
	printf("The product of the given numbers : %d\n",multiplication);
	printf("The quotient of the given numbers : %f\n",division);
	return 0; } */
/* Output: 
		Input any two numbers separated by comma: 10,5
		The sum of the given numbers : 15
		The difference of the given numbers : 5
		The product of the given numbers : 50
		The quotient of the given numbers : 2.000000
		----------------------------------------------------------------
		Process exited after 8.846 seconds with return value 0
		Press any key to continue . . .          */
//****************************************************************************************************************************
/* 10. Write a C program to find the third angle of a triangle if two angles are given. Go to the editor
Expected Output :
Input two angles of triangle separated by comma : 50,70
Third angle of the triangle : 60 */
/*#include<stdio.h>
int main(){
	int i,j;
	printf("Input two angles of triangle separated by comma : "); scanf("%d,%d",&i,&j);
	int k=180-i-j;
	printf("Third angle of the triangle : %d\n",k);
	return 0; }*/
/* Output: 
		Input two angles of triangle separated by comma : 50,70
		Third angle of the triangle : 60
		----------------------------------------------------------------
		Process exited after 5.224 seconds with return value 0
		Press any key to continue . . . .              */

