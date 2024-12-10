#include<stdio.h>
int main( )
{
  float weight,height,bmi;
  printf("\nenter your weight in kilograms:");
  scanf("%f",&weight);
  printf("\nenter your height in meters:");
  scanf("%f",&height);
  bmi=weight/(height*height);
  if(bmi<18.5)
    {
      printf("\nyour BMI is %2f.you are under weight.\n",bmi);
    }
  else if(bmi>=18.5&&bmi<24.9)
    {
     printf("\nyour BMI is %2f.you have normal weight.\n",bmi);
    }
  else if(bmi>=25&&bmi<29.9)
    {
     printf("\nyour BMI is%2f.you have over weight.\n",bmi);
    } 
  else
    { 
     printf("\nyour BMI is %2f. you have obese.\n",bmi);
    }
return 0;
}
