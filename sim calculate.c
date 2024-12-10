#include<stdio.h>
int main()
{
char op;
float num1=12, num2=21,result=0.01;
printf("welcome to simple calculate");
printf("\n");
printf("enter[+-*/]");
scanf("%c",&op);
switch(op)
{
case'+':
result=num1+num2;
break;
case'-':
result=num1-num2;
break;
case'*':
result=num1*num2;
break;
case'/':
if(num2!=0)
{
result=num1/num2;
}
else
{
printf("enter 1 division by zero is not allowed\n");
}
break;
default:
printf("invalid operator");
}
printf("%2f%c%2f=%2f",num1,op,num2,result);
return 0;













}
