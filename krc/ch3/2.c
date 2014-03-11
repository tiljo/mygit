#include<stdio.h>
char escape(char s[], char t[])
{
int i,j;
i=j=0;

	while((t[j++])!='\0'){
		switch(t[j]){
	
		case '\t':
			/*putchart*/t[j++]='\\';
			/*putchar*/t[j]='t';
	//		i++;
		//	j++;
			break;
		case '\n':
			/*putchar*/t[j++]='\\';
			/*putchar*/t[j]='n';
	//		i++;
			//j++;
			break;
		default:
			s[i++]=t[j++];
			break;
		}
	
	}
//	s[i]=t[j];
}
main()
{
char s[100];
char t[100];
int c,i;
i=0;

	while((c=getchar())!=EOF && c!='\0'){
		t[i]=c;
		++i;
	}
	t[i]='\0';
	escape(s,t);
	printf("%s",s);
}
