#include<stdio.h>
main()
{
 int fhr,cel;
 int upper,lower,step;


 upper=300;
 lower=20;
 step=20;
 printf("fhr to cel\n");

 fhr=lower;
 while (fhr<=upper)
 {
  cel=5*(fhr-32)/9;
  printf("%d\t%d\n",fhr,cel);
  fhr=fhr+step;
}
}


