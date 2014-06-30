#include<stdio.h>
static char daytab[2][13]={
				{0,31,28,31,30,31,30,31,31,30,31,30,31},
				{0,31,29,31,30,31,30,31,31,30,31,30,31}
};

int day_of_year(int year,int month,int day)
{
	int leap;
	char *p;

	leap=year%4==0 && year%100 !=0 || year%400==0;
	p=daytab[leap];
	while(--month)
		day+=*++p;
	return day;
}

void month_day(int year,int yearday,int *pmonth,int *pday)
{
	int leap;
	char *p;
	
	leap=year%4==0 && year%100 !=0 || year%400==0;
	p= daytab[leap];
	while(yearday> *++p)
		yearday -= *p;
	*pmonth = p-*(daytab+leap);
	*pday=yearday;
}

main()
{
        int m=0,d=0;
        printf("day of year of 25/06/2014 is\n");
        printf("%d\n",day_of_year(2014,6,25));
        printf("month & day of 176th day of 2014 is\n");
        month_day(2014, 176,&m,&d );
        printf("%d      %d\n",d,m);

}
                                                                   

