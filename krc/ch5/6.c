#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define NUMBER '0'
int get_line(char *s,int lim)
{
	int c;
	char *i=s;
	while((--lim>0) && (c=getchar())!=EOF && c!='\n')
		*s++=c;
	if(c=='\n')
		*s++=c;
	*s='\0';
	return s-i;
}

int atoi (char *s)
{
	int n,sign;
	while(isspace(*s++))
		;
	sign = (*s=='-')? -1:1;
	if(*s== '+' || *s == '-')
		s++;
	n=0;
	while(isdigit(*s++))
		n=10* n + (*s-'0');
	return sign *n;
}

void reverse(char *s)
{
	char c;
	char *slast;
	for(slast= (s+strlen(s)-1);s<slast;s++,slast--){
		c=*s;
		*s=*slast;
		*slast=c;
	}
}

void itoa(int n,char *s)
{
	int sign;
	if ((sign = n)<0)
		n=-n;
	do{
		*s++=n%10 + '0';
	}while((n/10)>0);
	if(sign<0)
		*s++='-';
	*s='\0';
	reverse(s);
}
int strindex(char *s,char *t)
{
	char *k,*l;
	char *f=s;
	for(;*s=!'\0';s++){
		for(k=s,l=t;*l=!'\0' && *k==*l;k++,l++)
			;
		if((l-t)>0 && *l=='\0')
			return k-f;
	}
	return -1;
}

#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;
/* buffer for ungetch */
/* next free position in buf */
int getch(void) /* get a (possibly pushed-back) character */
{
        return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
/* push character back on input */
{
        if (bufp >= BUFSIZE)
                printf("ungetch: too many characters\n");
        else
                buf[bufp++] = c;
}




int getop(char *s)
{
	int c;
	while(*s = c = getch() == ' ' || c=='\t')
		;
	*(s+1)='\0';
	if (!isdigit(c) && c!='.')
		return c;
	s--;
	if(isdigit(c))
		while(isdigit (*s++ = c = getch()))
			;
	if(c='.')
		while(isdigit(*s++ = c= getch()))
			;
	*s='\0';
	if(c!=EOF)
		ungetch(c);
	return NUMBER;
}

	

main()
{

	char s[100]="tiljotr";
	char t[100]="jotr";
	char h[12]="12";
	//reverse(t);
	printf("%d\n",strindex(s,t));
	printf("%s	%s\n",t,s);
}
