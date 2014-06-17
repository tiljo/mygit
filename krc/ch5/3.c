#include<stdio.h>
void str_cat(char *s,char *t)
{
	while(*s)
		s++;

	while(*s++=*t++)
		;
//	printf("%s \n", s);
}
main()
{
	char skr[13]="tiljo";
	char t[5]="tr";
	char i=0,j=0;
	/*for(i=0;i<6;i++){
		skr[i]=i;
	}
	skr[i]='\0';*/
/*	for(i=0;i<4;i++){
		t[i]=1;
	}
	t[i]='\0';*/
	printf("%s\n",skr);
	str_cat(skr,t);
	printf("%s \n",skr);
		
	
}
