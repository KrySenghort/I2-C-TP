#include<stdio.h>
int main()
{
	FILE *f = fopen("test.txt","w");//w=write = delete old thing and put new thing, r=read, a=attend=add more of this thing or double or more than this, doc=document(dox=file word) , csv=file excel
	fprintf(f, "Hello cambodia\n");
	fprintf(f, "I study at ITC\n");
	fprintf(f, "data engineer\n");
	fprintf(f, "I am data scientist in Cambodia\n");
	fprintf(f, "I will not been able to talk the numerical analysis\n");
	fprintf(f, "I love you so much\n");
	fprintf(f, "I want to be a businessman in marketing analysis.\n");
	fprintf(f, "%c\n",'F');
	fprintf(f, "%d\n",1356789);
	fprintf(f, "%.2f\n",234.673*132.45);
	fclose(f);
}
//**************************************************************************************************************************************************************************************************
//**************************************************************************************************************************************************************************************************
//write a file to store and create a menu for customer's ordering.
//[c]offee
//[G]reen
//[M]ilk
//[I]ce
//[E]xit
#include<stdio.h>
#include<ctype.h>	//use to include the type of characters.
#include<time.h>
void menu()
{	printf("[C]offee\n");
	printf("[G]reen tea\n");
	printf("[M]ilk\n");
	printf("[I]ce tea\n");
	printf("[E]xit\n");	}
char *now(char *dt){
	time_t current = time(NULL);
	struct tm *info=localtime(&current);
	strftime(dt, 40, "%Y%m%dT%H%M%S",info);
	return dt;	}
int main()
{
	/*menu();
	char b;
	FILE *f=fopen("record.txt","w");
	do{	
		printf("Enter drink: ");
		scanf("%c",&b);
		b = (char) (toupper(b));//use to get input all of type characters. 
		fflush(stdin);//we use it add more ordering , clear memory space and store more thing.
		if(b=='C')
		{
			fprintf(f,"Ice tea\n");			
		}		
		else if(b=='G')
		{
			fprintf(f,"Green tea\n");
		}
		else if(b=='M')
		{
			fprintf(f,"Milk\n");
		}
		else if(b=='C')
		{
			fprintf(f,"Coffee\n");
		}
		else 
		{
			fprintf(f,"it is invalid\n");	
		}		
		fprintf(f,"%c\n", b);//way to store file.
}		while(b!='E');
		fclose(f);
		return 0;*/
		//***********************************************************************************************************
	char dt[40];
	menu();
	char b;
	FILE *f = fopen("recording001.txt","w");
	do{	
		printf("Enter drink: ");
		scanf("%c",&b);
		b = (char) toupper(b);	//use to get input all of type characters. 
		fflush(stdin);				//we use it add more ordering , clear memory space and store more thing.
		fprintf(f,"%s , %c\n",now(dt), b);
}		while(b !='E');
		fclose(f);
		return 0;
			
}

