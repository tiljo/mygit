#include<stdio.h>
int detab(void);
main()
{
	int c;
	while((c=getchar())!=EOF)
		if(c=='\t')
			detab();
		else if(c!='\t')
			putchar(c);
}

int detab(void)

{
	
		putchar('#');
		putchar('#');
		putchar('#');
		putchar('#');	
	
}		
