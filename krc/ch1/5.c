#include <stdio.h>
main()
{int fhr;
for(fhr=300;fhr>=0;fhr=fhr-20)
printf ("%3d %6.2f\n",fhr,0.5/0.9*(fhr-32));
}
