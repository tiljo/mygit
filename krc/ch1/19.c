#include<stdio.h>
#define MAXLINE 1000

int get_line(char line[],int lim);
void revrse(char to[],char from[],int len);

main()
{
	int len;
	char line[MAXLINE];
	char rvs[MAXLINE];
	

	len = get_line(line,MAXLINE);
	
	revrse(rvs,line,len);
	printf("%s\n",rvs);
	
	return 0;

}

int get_line(char s[],int lim)
{

	int c,i;
	
	for (i = 0; i < lim-1 && (c=getchar())!=EOF ;++i) {
		s[i]=c;
	}
	s[i]='\0';
//	printf("i val %d\n",i);
	return i;
}

void revrse(char to[],char from[],int len)
{
	int i,j;
	j=0;
	for (i = len-1 ; i >= 0 ; --i) {
		to[i] = from[j];
		++j;
	}
	to[len]='\0';
}

