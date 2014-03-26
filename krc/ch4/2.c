#include<stdio.h>
#define MAX 100
#include <ctype.h>
/* atof: convert string s to double */
double atof(char s[])
{
double val, power;
int i,sign,r,sign1;
for (i = 0; isspace(s[i]); i++) /* skip white space */
	;
sign = (s[i] == '-') ? -1 : 1;
if (s[i] == '+' || s[i] == '-')
i++;
for (val = 0.0; isdigit(s[i]); i++)
val = 10.0 * val + (s[i] - '0');
if (s[i] == '.')
i++;
for (power = 1.0; isdigit(s[i]); i++) {
val = 10.0 * val + (s[i] - '0');
power *= 10;
}

if (s[i]=='e' || s[i]=='E')
	i++;

sign1=(s[i]=='-') ? -1:1;
if (s[i] == '+' || s[i] == '-')
	i++;
for (r=0;isdigit(s[i]);i++)
	r=10*r+(s[i]-'0');
if (sign1== -1){
	while(r>0){
		val=val/10;
		--r;
	}
}
else 
	while(r>0){
		val=val*10;
		--r;

	}

return sign * val / power;
}


/*main()
{
char s[]="-125.32e-10";
printf("%g\n",atof(s));
}*/
int getln(char s[],int max)
{
int c,i;
i=0;
while(--max>0 && (c=getchar())!=EOF && c!='\n')
	s[i++]=c;
if (c=='\n')
	s[i++]=c;
s[i]='\0';
return i;
}

main()
{
double sum,atof(char []);
char line[MAX];
int getln(char line[],int max);
sum=0;
while(getln(line,MAX)>0)
	printf("\t%g\n",sum+=atof(line));
return 0;
}
