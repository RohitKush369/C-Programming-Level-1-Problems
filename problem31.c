#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int ones,tens,hundreds,sum;
            ones = x % 10;
            tens = (x / 10) % 10;
            hundreds = x/100;
            sum = ones + tens+hundreds;
            if(sum < 10)
            {
               printf("%d",sum);
            }
            else
            {
                  ones = sum % 10;
                  tens  = sum/10;
                  sum = ones + tens;
                  if(sum < 10)
                  {
                      printf("%d",sum);

                  }

                  else
                 {
                       ones = sum % 10;
                       tens  = sum/10;
                       sum = ones + tens;
                       printf("%d",sum);
                  }
              }
}
