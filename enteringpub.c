#include<stdio.h>
int main( )
{
int age ;
printf("Enter your age to check if you can enter this pub:");
scanf("%d",&age);
if(age>=20&&age<=60)
{
printf("\nyou are invited.\n");
}
else
{
printf("\nsorry,you cannot enter.\n");
}
return 0;
}
