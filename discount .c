#include<stdio.h>
int main( )
{
  int member=1;
  float purchaseamount=120.0;
  if(member)
  {
      if(purchaseamount>100)
       {
         printf("discount:10%%\n");
       }
      else
       {
        printf("discount:0%%\n");
       }
  }
     else
      {
        if (purchaseamount>150)
         {
           printf("discount:5%%\n");
         }
      else
       {
         printf("discount:0%%\n");
        }
      }
  return 0;
}

