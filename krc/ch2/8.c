#include<stdio.h>
int rightrot(unsigned x,int n)
{
unsigned a,b,c,z;
	a=x ;
	b=a>>n;
	c= a<<(5-n);
	z=(b|c) & 31;
	return z;
}

main()
{
printf("%u\n",rightrot(16,2));
return 0;
}

