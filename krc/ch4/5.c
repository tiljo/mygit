#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

#define MAXOP 100
#define NUMBER '0'
#define MATH '1'

int getop(char []);
void push (double);
double pop (void);
void clear (void);
void fun (char []);
/*reverse polish calculator*/
main()
{
	int type;
	double op3;
	char s[MAXOP];

	while((type = getop(s))!=EOF){
		switch (type){
		case NUMBER :
			push( (atof(s)));
			break;
		case '+':
			push (pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case MATH:
			fun(s);
			break;
		case '-':
			op3 = pop();
			push(pop() - op3);
			break;
		case '/':
			op3 = pop();
			if (op3 !=0.0)
				push(pop() / op3);
			else
				printf("error : zero divisor\n");
			break;
		case '%':
			op3 = pop();
			if (op3 != 0.0)
				push((int) pop() % (int) op3);
			else
				printf("error: zero mod");
			break;
		case'c':
			clear();
			printf("stack cleared\n");
			break;
		
		case 'd':
			push(op3 = pop());
			push(op3);
			break;
		case '\n':
			printf("\t%.8g\n",pop());
			break;
		default:
			printf("error: unknown command %s \n",s);
			break;
		}
	}
	return 0;
}
#define MAXVAL 100

int sp=0;
double val[MAXVAL];

void push (double f)
{
	if (sp< MAXVAL)
		val[sp++]= f;
	else
		printf ("error: stack full, can't push %g\n", f);
}
/* pop: pop and return top value from stack*/
double pop (void)
{
	if (sp>0)
		return val[--sp];
	
		
	else{
		printf("error: stack empty \n");
	return 0.0;
	}
}

#include <ctype.h>

int getch (void);
void ungetch(int);
/* getop: get next character or numeric operand*/
int getop(char s[])
{
	int i,c;
	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	i=0;
	if (isalpha(c)){
		while (isalpha(s[++i] = c = getch()))
			;
		s[i]='\0';
		if (c != EOF)
			ungetch(c);
		if(strlen(s)>1)
			return MATH;
		else
			return c;
	}
	
	if (!isdigit (c) && c!='-' && c!='.' && !isalpha(c))
		return c; /* not a number */
	
	
	if ( c=='-')/* collect integer part */
        	if ( isdigit(c = getch())|| c == '.')
			s[++i]=c;
		else{
                	if (c != EOF)
               			 ungetch(c);
        		return '-';
		}

	if (isdigit(c)) /* collect integer part */
	while (isdigit(s[++i] = c = getch()))
		;
	
	if (c == '.')
	while(isdigit(s[++i] = c = getch()))
		;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
/*	i=0;
	if (isalpha(c=getch()))
		while (isalpha(s[++i] = (c = getch())))
			;
	s[i]='\0';
	if (c != EOF)
		ungetch(c);
	
	return MATH;*/
	
}

#define BUFSIZE 100

char buf[BUFSIZE];/*buffer for ungetch*/
int bufp = 0;/*next free positon in buf*/
int getch (void)/* get a (possily pushed-back) character*/
{
	return (bufp > 0) ? buf[--bufp] : getchar ();
}

void ungetch (int c)/*push character back on input*/
{
	if (bufp >= BUFSIZE)
		printf ("ungetch: too many characters\n");
	else
		buf[bufp++]=c;
}
void clear ()
{
	sp=0;
}

void fun (char s[])
{
	double op2;
	if(strcmp(s,"sin")==0){
		op2=sin(pop());
		push(op2);
	}
	if(strcmp(s,"cos")==0){
		op2=cos(pop());
		push(op2);
	}
	if(strcmp(s,"pow")==0){
		op2=(pop());
		push(pow(pop(),op2));
	}
	if(strcmp(s,"exp")==0){
		push(exp(pop()));
//		push(op2);
	}
}



