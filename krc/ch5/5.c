#include<stdio.h>

void str_cpy(char *s,char *t,int n)
{
	while((*s++=*t++)&& (n>1)){
		n--;
	}
}


void str_cat(char *s,char *t,int n)
{
	while(*s)
		s++;
	while((*s++=*t++)&&(n>1))
		n--;
}

int str_cmp(char *s,char *t,int n)
{	
	for(;(*s==*t);s++,t++){
		if(*s=='\0'|| (--n <=0))
			return 0;
	}
	return *s-*t;
}

main()
{
        char s[100]="tiljo";
        char t[100]="trook";
        int n=2;
        printf("%d \n",str_cmp(s,t,n));
        str_cpy(s,t,n);
	str_cat(s,t,n);
        printf("%s \n",s);
}

