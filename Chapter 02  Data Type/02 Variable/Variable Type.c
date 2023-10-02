//1. Write a C program which will invoke the command processor to execute a command. Go to the editor
/*#include<stdio.h>
#include<stdlib.h>
int main(){
	int x;
	printf("Is command available?\n");
	if(system(NULL))
		printf("command processor is available\n");
	else{
		printf("commnad processor is not available\n");
		exit(1); }
	printf("Executing command DIR\n");
	x=system("dir");
	printf("returned value is %d\n",x);	
	return 0; } */
//*******************************************************
/*Output:
Is command available?
command processor is available 
Executing command DIR
Volume in drive D is New Volume
Volume Serial Number is E8DB-5FB0
Directory of D:\Year 02\Data Structure and  Computer Architecture\C\TP\Chapter 02  Data Type\02 Variable
03/04/2022  04:11 PM    <DIR>           .
03/04/2022  04:11 PM    <DIR>          ..
03/04/2022  04:11 PM             2,646 Variable Type.c
03/04/2022  04:11 PM           130,237 Variable Type.exe
03/04/2022  02:20 PM            10,310 Variable type.txt
               3 File(s)        143,193 bytes
               2 Dir(s)  816,497,410,048 bytes free
returned value is 0
-----------------------------------------------------------------------------------------------------------
Process exited after 0.1486 seconds with return value 0
Press any key to continue . . .                              */
//*****************************************************************************************************************************
/* 2. Write a C program to convert a string to an unsigned long integer. Go to the editor
Test Data and Expected Output :
Input an unsigned number: 25                                            
Output : 25 */
#include<stdio.h>
#include<stdlib.h>
	int main ()
	{
		char buffer[123];
		unsigned long ul;
		printf ("\nInput an unsigned number: ");
		fgets (buffer,123,stdin);

		ul = strtoul (buffer,NULL,0);
		printf ("Output: %lu\n\n",ul);
		return 0; }
		









































































