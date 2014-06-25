#include<stdio.h>
static char daytab[2][13]={
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
};

int day_of_year(int year,int month,int day)
{
	int i,leap;
	leap = year%4 == 0 && year%100 !=0 || year%400==0;
	if((month<1 || month>12) || (day<1 || day> daytab[leap][month]))
		return -1;
	for(i=1;i<month;i++)
		day +=daytab[leap][i];
	return day;
}

void month_day(int year,int yearday,int *pmonth,int *pday)
{
	int i,leap,totaldays;
	if(year<1){
		*pmonth=-1;
		*pday=-1;
		return;
	}
	leap=year%4 == 0 && year%100 !=0 || year%400 ==0;
	for (i=1;i<=12 && yearday > daytab[leap][i];i++)
		yearday-=daytab[leap][i];
	if(i>12 && yearday > daytab[leap][12]){
		*pmonth=-1;
		*pday=-1;
	}
	else{
		*pmonth=i;
		*pday=yearday;
	}

/*	if(leap)
		totaldays=365;
	else
		totaldays=364;
	if(yearday<1 || yearday>totaldays){
		*pmonth=-1;
		*pday=-1;
		return;
	}
	else{
		for(i=1; daytab[leap][i];i++)
			yearday -=daytab[leap][i];
		*pmonth=i;
		*pday=yearday;
	}*/
	
}

main()
{
	int m=0,d=0;
	printf("day of year of 25/06/2014 is\n");
	printf("%d\n",day_of_year(2014,6,25));
	printf("month & day of 176th day of 2014 is\n");
	month_day(2014, 176,&m,&d );
	printf("%d	%d\n",d,m);
	
}
