#include"header.h"
int main()
{
	char *s = "tiljo";
	int h= 8;
	char g ='i';
	char t[100];
	sprintf(t,"%s	%d	%c",s,h,g);
	printf("%s\n",t);
	return 0;
}
	
