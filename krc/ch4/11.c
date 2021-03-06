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
	int type,i,var=0;
	double op2,v;
	char s[MAXOP];
	double variable[26];
	for(i=0;i<26;++i){
		variable[i]=0;
	}

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
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 !=0.0)
				push(pop() / op2);
			else
				printf("error : zero divisor\n");
			break;
		case '%':
			op2 = pop();
			if (op2 != 0.0)
				push((int) pop() % (int) op2);
			else
				printf("error: zero mod");
			break;
		case'c':
			clear();
			printf("stack cleared\n");
			break;
		
		case 'd':
			push(op2 = pop());
			push(op2);
			break;
		case '=':
			pop();
			if(var >='A' && var<='Z'){
				variable[var-'A']=pop();
			}
			else
				printf("error:no vaiable name assigned\n");
			break;
		case '\n':
			v=pop();
			printf("\t%.8g\n",v);
			break;
		default:
			if(type >= 'A' && type <= 'Z')
				push(variable[type-'A']);
			else if (type == 'v')
				push(v);
			else
				printf("error: unknown command %s \n",s);
			break;
		}
		var=type;
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
	static int store=0;
	if(store==0){
		c=getch();
	}
	else{
		c=store;
		store=0;
	}
	while ((s[0] = c ) == ' ' || c == '\t')
		c=getch();
	s[1] = '\0';
	i=0;
	if (islower(c)){
		while (islower(s[++i] = c = getch()))
			;
		s[i]='\0';
		if (c != EOF)
			store=c;
		if(strlen(s)>1)
			return MATH;
		else
			return s[i-1];
	}
	
	if (!isdigit (c) && c!='-' && c!='.'/* && !islower(c)*/)
		return c; /* not a number */
	
	if ( c=='-')/* collect integer part */
        	if ( isdigit(c = getch())|| c == '.')
			s[++i]=c;
		else{
                	if (c != EOF)
               			 store=c;
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
		store=c;
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

/*void ungetch (int c)/*push character back on input*/
/*{
	if (bufp >= BUFSIZE)
		printf ("ungetch: too many characters\n");
	else
		buf[bufp++]=c;
}*/
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

/*void ungets(char s[])
{
	int len=strlen(s);
	
	while(len>0)
		ungetch(s[--len]);
}*/

