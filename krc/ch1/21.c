#include<stdio.h>
int entab(void);
main()
{
	int c;
	while((c=getchar())!=EOF)
		while((c=getchar())==' ')
			entab();
		if(c!=' ')
			putchar(c);
}
int entab(void)
{
	int c,i;
	i=1;

	++i;
	printf("%d",i);
}
		
