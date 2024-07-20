#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    int ones,hundreds,sum;
    ones=x%10;
    hundreds=x/100;
    sum=ones+hundreds;
    if(sum<10)
  {
        print("success");

  }
    else
  {
        printf("failure");
  }


}
