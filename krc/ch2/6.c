#include<stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y)
{
	
	return( (x|((~(~0<<n)<<(p-n+1))))& (y<<(p-n+1)|~(~(~0<<n)<<(p-n+1))));
}
main()
{
	
	printf("%u\n",setbits(25,4,4,13));
}
