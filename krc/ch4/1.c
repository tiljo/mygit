/*Write the function strindex(s,t) which returns the position of the rightmost
occurrence of t in s, or -1 if there is none.*/
#include<stdio.h>
#define MAX 100
int getln(char s[], int lim);
int strindex(char s[], char t[]);
main()
{
char t[]="ould";

char s[MAX];

while((getln(s,MAX))>0){
	if((strindex(s,t))>=0){
		printf("%d\n",strindex(s,t));

	}

}

}

int getln(char s[], int lim)
{
int c,i;
i=0;
while(--lim>0 && (c=getchar())!=EOF && c!='\n')
	s[i++]=c;
if(c=='\n')
	s[i++]=c;
s[i]='\0';
return i;
}

int strindex(char s[], char t[])
{
int i,j,k;
for(i=0; s[i]!='\0'; i++){
	for(k=0,j=i; t[k]!='\0' && t[k]==s[j]; j++,k++)
		;
	if (k!=0 && t[k]=='\0')
		return (j-1);
	
}
return -1;
}
