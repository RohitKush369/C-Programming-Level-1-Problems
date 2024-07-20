#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    int first_two_digits,last_two_digits,tens,hundreds,a;
    first_two_digits=x%100;
    last_two_digits=x/100;
    tens=first_two_digits/10;
    hundreds=last_two_digits%10;
    a=(tens==hundreds);
    y=x-(a*5);
    printf("%d",y);
}
