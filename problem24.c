#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    int ones,hundreds,a;
    ones=x%10;
    hundreds=x/100;
    a=(ones==hundreds);
    y=x-(a*5);
    printf("%d",y);

}
