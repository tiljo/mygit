#include<stdio.h>
main()
{
char c,temp,max;
char s1[36],s2[36];
int i,j,k;
i=j=0;
while((c=getchar())!=EOF ){
	if(c>='-'){
		s1[i]=c;
		++i;
	
	}

}

s1[i]='\0';
printf("%s\n",s1);

temp=s1[0];

	for(k=j=0; j<i; ++j){
		while(temp<=s1[j]){
			s2[k++]=temp++;
		}	
	}
printf("%s\n",s2);
}
