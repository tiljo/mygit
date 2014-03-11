#include<stdio.h>
main()
{
int i,lim,c;
char s[18];
lim=10;
	/*	for(i=0 ; i< lim-1 && (c=getchar())!=EOF && c!='\n';++i)
			s[i]=c;					*/
i=0;
	while((c=getchar())!=EOF){	
		if(i<lim-1){
			if(c !='\n'){
				s[i]=c;
				++i;
			}
		}
	} 
		
	printf("%s",s);
}
