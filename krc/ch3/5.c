
#include<stdio.h>
#include<string.h>

void reverse(char s[])
{
int c, i, j;
for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
c = s[i];
s[i] = s[j];
s[j] = c;
}
}

void itob(int n, char s[], int b)
{
int i, sign;
if ((sign = n) < 0) /* record sign */
n = -n;
i = 0;
do {
/* generate digits in reverse order */
s[i++] = n % b + '0'; /* get next digit */
} while ((n /= b) > 0);
/* delete it */
if (sign < 0)
s[i++] = '-';
s[i] = '\0';
reverse(s);
printf("%s\n",s);
}

void itoh(int n, char s[],int h)
{
int i, sign;
if ((sign = n) < 0) /* record sign */
n = -n;
i = 0;
do {
/* generate digits in reverse order */
s[i] = n % 16 + '0';
if(s[i]>'9'){
	s[i]=s[i]+'@'-'9';
}
++i; /* get next digit */
} while ((n /= 16) > 0);
/* delete it */
if (sign < 0)
s[i++] = '-';
s[i] = '\0';
reverse(s);
printf("%s\n",s);
}

main()
{
int n,b,h;
char s[100];
h=16;
scanf("%d%d",&n,&b);
itob(n,s,b);
itoh(n,s,h);
}
