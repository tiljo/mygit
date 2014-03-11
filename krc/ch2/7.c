#include<stdio.h>

unsigned invert(unsigned x, int p, int n)
{

	return (~(~0 << n)<<(p-n+1))^x;

}

main()
{

printf("%u\n",invert(25,3,3));
return 0;
}
