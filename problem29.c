#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    int first_two_digits,last_two_digits,tens,hundreds,sum;
   first_two_digits=x%100;
   last_two_digits=x/100;

    tens=first_two_digits/10;
    hundreds=last_two_digits%10;
    sum=tens+hundreds;
    if(sum>10)
  {
        printf("success");

  }
    else
  {
        printf("failure");

  }

}
