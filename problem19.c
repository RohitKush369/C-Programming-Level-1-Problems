//get a three digit number from user and make the ones digit 2 then print it//
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    int ones,tens,hundreds;
    ones=2;
    tens=x/10%10;
    hundreds=x/100;
    y=hundreds*100+tens*10+ones;
    printf("%d",y);
}
