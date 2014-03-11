#include<stdio.h>
#define MAXLINE 1000
int getln(char line[],int len);
void copy(char to[], char from[]);
main()
{
	int len;
	char line[MAXLINE];
	char nwln[MAXLINE];


	while(len=(getln(line,MAXLINE))>3){
		copy(nwln,line);
		printf("%s\n",nwln);
			
	}
	return 0;
}

int getln(char s[], int lmt)
{
	int c,i;
	i=0;
	while((c=getchar())!=EOF){	
		if(i<lmt-1){
			if(c !='\n'){
				s[i]=c;
				++i;
			}
		}
	}
		
	
	s[i]='\0';
	return i;
}

void copy(char to[],char from[])

{
	int i;
	i=0;
	while(( to[i]=from [i])!='\0')
		++i;
		
	to[i]='\0';
}
