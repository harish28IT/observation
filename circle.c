#include<stdio.h>
int main()
{
float radius,diameter,circumference,area;
printf("enter radius of circle:");
scanf("%f",&radius);
diameter=2*radius;
circumference=2*3.14*radius;
area=3.14*(radius*radius);
printf("diameter of circle=%.2funits\n",diameter);
printf("circumference of circle =%.2funits\n",circumference);
printf("area of circle=%.2f units\n",area);
return 0;
}
