#include<stdio.h>
int main()
{
int days,year,weeks,hours;
printf("enter the number of days:");
scanf("%d",&days);
hours=days*24;
year=(days/365);
weeks=(days%365)/7;
days=days-((year*365)+(weeks*7));
printf("number of hours:%d\n",hours);
printf("number of years:%d\n",year);
printf("number of weeks:%d\n",weeks);
printf("number of days:%d",days);
return 0;
}
