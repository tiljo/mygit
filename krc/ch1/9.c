#include<stdio.h>
main()
{
	int c;

	while((c=getchar()) !=EOF){
		if (c==' ')
       			{
			while ((c=getchar())==' ')
					;
        
  				putchar(' ');}
		else if (c !=' '){
  			putchar(c);}
  	}}
