#include"/home/tiljo/Documents/krc/ch4/3.c"
#include<stdio.h>
#include<ctype.h>
int getch(void);
void ungetch(int);

int getfloat(float *pn)
{
	int c,sign;
	float ps;
	while(isspace (c = getch()))
		;
	if (!isdigit(c) && (c != EOF) && c !='+' && c !='-' && c!='.'){
		ungetch(c);
		return 0;
	}
	sign =( c == '-')? -1:1;
	if (c == '+' || '-'){
		c=getch();
		/*if(!isdigit(c=getch())){
			if (c!=EOF)
				ungetch(c);
			ungetch(ps);
			return ps;
		}*/
	}
			
		
	for(*pn = 0.0; isdigit(c); c = getch())
		*pn =10.0 * *pn + (c-'0');
	if (c=='.')
		c=getch();
	for(ps=1.0; isdigit(c); c=getch()){
		*pn=10.0 * *pn+(c-'0');
		ps*=10.0;
	}
	*pn *=sign/ps;
	if(c !=EOF)
		ungetch(c);
	return c;
}
/*#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
	return (bufp>0)?buf[--bufp]:getchar();
}

void ungetch(int c)
{
	if(bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}*/
