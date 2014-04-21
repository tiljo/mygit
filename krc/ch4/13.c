#include<stdio.h>
#include<string.h>
void reverser(char s[],int i, int len)
{
	int c,j;
	j=len-(i+1);
	if (i<j){
		c=s[i];
		s[i]=s[j];
		s[j]=c;
		reverser(s,++i,len);
	}
		
}
		
void reverse(char s[])
{
	void reverser(char s[],int i,int len);
	reverser(s,0,strlen(s));
}


main()
{

	char s[100];

	scanf("%s",s);
	reverse(s);
	printf("%s\n",s);
}
