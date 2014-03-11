#include<stdio.h>
int any(char s1[], char s2[]);
main()
{
char s1[50]="abcdefghijk";
char s2[50]="zxc";
any(s1,s2);
printf("%d\n",any(s1,s2));
}

int any(char s1[],char s2[])

{
int i,j,pstn;
pstn=-1;
	for(i=0; s1[i] !='\0'; ++i){
		for(j=0; s2[j] !='\0'; ++j){
			if(s1[i]==s2[j] )
				pstn=i;
			
			
		}
	}
	return pstn;
}
