/*#include<stdio.h>
int main()
{
	FILE *f=fopen("song.txt","r");
	int c;
	while((c=fgetc(f)) !=EOF){
	//	printf("%d , %c\n", c, c);
	//	printf("%c",c);
		printf("%c",toupper(c));
}
	fclose(f);
	return 0;
}*/
//***************************************
#include<stdio.h>
#include<string.h>
char *rmline(char *s){
	char *p = strchr(s,'\n');
	*p = '\0';
	return s;
}
int main()
{
	FILE *f=fopen("movie.txt","r");
	char name[300];
	int line = 0;
	while((fgets(name,300,f))= !=NULL)
{
	printf("%d: %s", ++line,name);
}
	return 0;
}













