//get two digit number from user and make the tens digit 1 then print it//
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    int ones,tens;
    ones=x%10;
    tens=1;
    y=ones+(tens*10);
    printf("%d",y);
}
