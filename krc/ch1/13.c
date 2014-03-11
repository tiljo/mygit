#include<stdio.h>
#define OFF 0
#define ON 1
main()
{
int c,d,j,i,state;
int nlength[10];
for(i=0;i<10;++i)
	nlength[i]=0;
state=OFF;
j=0;




	while((c=getchar())!=EOF){
		if(c!=' '|| c!='\t'|| c!='\n')
			state=ON;
			++j;	
		if(c==' ' || c=='\t' ||c=='\n')
			state=OFF;
			++nlength[j];

		if(state==OFF)
			j=0;
						
			
	
			
			
		
			
		
	}
	
	printf("%d\n",j);


	for(i=0;i<=9;++i)
		printf("%d\n",nlength[i]);
}
