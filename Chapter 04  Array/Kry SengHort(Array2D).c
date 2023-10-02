//Program 01: Consider you have the following program:
#include<stdio.h>
int main()
{	int m,n,val[3][4]={8,16,9,52,3,15,27,6,14,25,2,10};
	for(m=0;m<3;m++){
		for(n=0;n<4;n++){
			printf("    val[%d][%d]=  %d\n",m,n,val[m][n]);	}  	}
	return 0;}
//******************************************************************************************************************
//******************************************************************************************************************
//******************************************************************************************************************
//Program 02: Write a program that adds the values of all elements in the value array used in Program 1 and displays the total.
#include<stdio.h>
int main()
{	int u,v,Value[3][4]={8,16,9,52,3,15,27,6,14,25,2,10};
	int Totale_of_all_elements =0;
	for(u=0;u<3;u++){
		for(v=0;v<4;v++){
			printf(" Value[%d][%d]=  %d\n",u,v,Value[u][v]);
			Totale_of_all_elements = Totale_of_all_elements + Value[u][v];	}	}
			printf("The Totale of summation for all elements in array value is %d\n",Totale_of_all_elements);
	return 0;}
//******************************************************************************************************************
//******************************************************************************************************************
//******************************************************************************************************************
//program 03: Modify the program written for Program 2 to display the total of each row separately.
#include<stdio.h>
int main(){
	int x,y,value[3][4]={8,16,9,52,3,15,27,6,14,25,2,10};
	int Totale_of_each_row_separately = 0;
	for(x=0;x<3;x++){
		for(y=0;y<4;y++){
			printf("value[%d][%d]= %d\n",x,y,value[x][y]);
			Totale_of_each_row_separately = Totale_of_each_row_separately+value[x][y];	}
			printf("The Totale of each row separately is %d\n",Totale_of_each_row_separately);	}
		return 0;	}
//******************************************************************************************************************
//******************************************************************************************************************
//******************************************************************************************************************
//program 4.  Write a C program that adds equivalent elements of the two dimensional
/*arrays named first and second. Both arrays should have two rows and three columns.

For example, element [1][2] of the resulting array should be the sum of first[1][2]
and second[1][2]. The first and second arrays should be initialized as follows:
    first             second
16   18   23        24   52   77
54   91   11        16   19   59*/
#include<stdio.h>
int main()
{
	int Q;
	int first[]={16,18,23,54,91,11};
	int second[]={24,52,77,16,19,59};
	int Totale_between_two_dimensions;
	for(Q=0;Q<5;Q++)	{
			printf("first[%d]  =  %d, second[%d]  =  %d, Totale between two dimesions = %d\n",Q,first[Q],Q,second[Q],Totale_between_two_dimensions);}
	return 0;}
	
