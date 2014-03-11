#include <stdio.h>
main()
{
	int c,i,j,d;
	int frq[200];
	for (i=0;i<200;++i)
		frq[i]=0;

	while((c=getchar())!=EOF)
	
			++frq[c-'0'];
		
	for(i=0;i<200;++i)
		if (frq[i]!=0)
		printf("%d  %d\n",i-48,frq[i]);
	d=frq[i];
	for(j=0; j<=d;++j)
		printf("*");

		printf("\n");
	
}
