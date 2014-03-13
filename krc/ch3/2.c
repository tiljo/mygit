#include<stdio.h>
char escape(char s[], char t[])
{
int i,j;


	for(i=j=0; (t[j])!='\0';++j){
		switch(t[j]){
	
		case '\t':
			s[i]='\\';
				
			s[++i]='t';
			
			break;
		case '\n':
			s[i]='\\';
			
			s[++i]='n';

			break;
		default:
			s[i]=t[j];
			break;
		}
		++i;
	}
	

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
