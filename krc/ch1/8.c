#include<stdio.h>
main()
{
 int c,nl,tb,bl;
 nl=0;
 tb=0;
 bl=0;
 while ((c=getchar() ) !=EOF)
{
 if(c=='\n')
 ++nl;
if(c=='\t')
 ++tb;
 if(c==' ')
 ++bl;
}
printf("%d %d %d\n",nl,tb,bl);
}
