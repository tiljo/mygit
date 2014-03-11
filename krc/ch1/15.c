#include <stdio.h>
int cel (int fhr);

main()
{
	int fhr;
	for (fhr=0; fhr<=300; fhr=fhr+20)
		printf("%d  %d\n", fhr, cel(fhr));
	return 0;
}

int cel (fhr)
{
	int c;
	
	c= 5 * (fhr-32) /9;
	return c;


}
