#include"header.h"
#define NUMBER '0'

int getop(char s[])
{
	int c,i,r;
	static char lastc[] = " ";

	sscanf(lastc,"%c",&c);
	lastc[0]=' ';
	while((s[0]=c)==' ' || c=='\t')
		if(scanf("%c",&c)== EOF)
			C=EOF;
	s[1]='\0';
	if(!isdigit(c)&& c!='.')
		return c;
	i=0;
	if(isdigit(c))
		do{
			r = scanf("%c",&c);
			if(!isdigit(s[++i] = c))
				break;
		}while(r != EOF);
	if(c == '.')
		do{
			r = scanf("%c",&c);
			if(!isdigit(s[++i] = c))
				break;
		}while(r != EOF);
	s[i] = '\0';
	if(r != EOF)
		lastc[0] = c;
	return NUMBER;
}
