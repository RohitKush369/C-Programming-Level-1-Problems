#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    int ones,tens,revrse;
    ones=x%10;
    tens=x/10;
    y=(ones*10)+tens;
    printf("%d",y);
}
