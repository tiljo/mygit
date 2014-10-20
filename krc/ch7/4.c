#include"header.h"

void minscanf(char *fmt, ...)
{
	va_list ap;
	char *p;
    char sval[100];	
	int *ival;
	double *dval;
	unsigned int *uval;

	va_start(ap,fmt);
	for(p = fmt; *p; p++){
		if(*p != '%'){
		//	putchar(*p);
			continue;
		}
		switch (*++p){
		case'd':
			ival = va_arg(ap,int *);
			scanf("%d",ival);
			break;
		case'x':
			uval =va_arg (ap, unsigned int *);
			scanf("%x",uval);
			break;
		case'f':
			dval = va_arg(ap,double *);
			scanf("%f",dval);
			break;
		case's':
			//for(sval = va_arg(ap, char *); *sval; sval++ )
				scanf("%s",sval);
				printf("%s\n",sval);
			break;
		default:
			//scanf(p);	
			break;
		}
	}
	va_end(ap);
}
int main()
{
	char f[100]; //= "tiljo";
	minscanf("%s",f);
	return 0;
}
