#include<stdio.h>
#include<stdlib.h>
int str_end(char *s,char *t)
{
        char *k=s;
	char *l=t;
	while(*s)
		s++;
	while(*t)
		t++;
	while(*s==*t){
		if(*t==*l){
			break;
		}
		s--;
		t--;
	}
	if(t==l){
		return 1;
	}
	else{
		return 0;
	}

}
main()
{
        char skr[100]="tiljo@trooo";
        char t[100]="trooo";
        char i=0,j=0;
  
        printf("%d\n",str_end(skr,t));
        printf("%s \n",skr);
	

}

