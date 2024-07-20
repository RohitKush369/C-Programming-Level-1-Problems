#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    int ones,tens,first_two_digits,last_two_digits,reverse_first_two_digits;
    first_two_digits=x%100;
    last_two_digits=x/100;
    ones=first_two_digits%10;
    tens=first_two_digits/10;
    reverse_first_two_digits=(ones*10)+tens;
    y=(last_two_digits*100)+reverse_first_two_digits;
    printf("%d",y);
}
