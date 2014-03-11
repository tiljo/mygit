#include<stdio.h>
#define MAXLINE 10

int get_line(char line[], int maxline);
void copy(char to[], char from[]);
main()
{

	int len,j,c;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max=0;
	j=0;
	while((len= get_line(line,MAXLINE))>0)
		if (len>max) {
			while((c=getchar())!='\n'&& c!=EOF){
				++len;
			}
			max=len;
			copy(longest,line);

					
		
		
			printf("%d\n",max);
			printf("%s", longest);		
		}
	return 0;
}


int get_line(char line[],int maxline)

{
	char c;
	int i;
	for(i=0;i<maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		line[i]=c;
	if (c=='\n'){
		line[i]=c;
		++i;
	}
	line[i]='\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;
	i=0;
	while((to[i]=from[i]) !='\0')
		++i;
}
