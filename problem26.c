#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    int ones,tens,sum;
    ones=x%10;
    tens=x/10;
    sum=ones+tens;
    if(sum==10)
    {
       printf("success");
    }
    else
    {
       printf("failure");

    }
}


