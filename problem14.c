#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    int ones,tens,hundreds;
    ones=x%10;
    tens=x/10%10;
    hundreds=x/100;
    y=(ones*100)+(tens*10)+hundreds;
    printf("%d",y);
}
