#include<stdio.h>
int squeeze (char s[],char t[]);
main()
{
int i,c,j;
i=j=0;
/*char s[9];
char t[9];*/


	char s[9]="tiljo";
	char t[9]="lj";
	/*while((c=getchar())!=EOF &&  c!='\0'){
			s[i]=c;
			++i;
		if(c=='\n')
			s[i]='\0';
	}

	while((c=getchar())!=EOF &&  c!='\0'){
		t[j]=c;
		++j;
		
		if(c=='\n')
			t[j]='\0';
	}*/
/*	printf("%s",s);
	printf("\n");
	printf("%s",t);*/
	squeeze(s,t);	
	printf("%s\n",s);
}

int squeeze (char s[],char t[])
{
int i,j,k,a;
k=0;

	
	for(j=0;  t[j] != '\0'; ++j){
		for(i=k=0; s[i] != '\0';++i){
			a=t[j];
			if(s[i]!=a){
				s[k++]=s[i];
				
			}
			
		}
		s[k]='\0';
	}

}
