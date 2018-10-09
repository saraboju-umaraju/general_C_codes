#include	<stdio.h>
int main()
{
struct date {
int da_day;
int da_mon;
int da_year;
}dt;

getdate(&dt);
printf("%d%d%d",dt.da_day,dt.da_mon,dt.da_year);
}
