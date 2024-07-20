
//get a two digit number from user and make the ones digit zero then print the number//
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    int ones,tens;
    ones=0;
    tens=x/10;
    y=tens*10+ones;
    printf("%d",y);
}
