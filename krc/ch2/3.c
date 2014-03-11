#include<stdio.h>
int atoi (char s[]);
main()
{
int i,c;
char s[9];
i=0;
	while((c=getchar())!=EOF){
		if(c>='0'&& c<='9')
			s[i]=c;
			++i;
	}
	
	printf("%d\n",atoi(s));
}
int atoi(char s[])
{
int i,n;
n=0;
	for(i=0; s[i] >='0' && s[i] <='9';++i)
		n=16*n+ (s[i]-'0');

	return n;

}
