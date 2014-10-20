#include"header.h"
#define MAX 10
int main()
{
	int c,i;
	while(((c = getchar())!=EOF)&& (c!='\n')){
		if(iscntrl(c) || c==' '){
			printf("%x",c);
		}else{
			putchar(c);
		}
		if((i++)== MAX-1){
			putchar('\n');
			i=0;
		}
	}
	return 0;
}

