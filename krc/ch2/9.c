#include<stdio.h>
int bitcount(unsigned x)
{
int b;
for(b=0;x!=0;b++)
	x= x & (x-1);
	
return b;
}
main()
{
printf("%d\n",bitcount(7));
return 0;
}
