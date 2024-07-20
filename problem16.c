
//get four digit number from user and reverse last two digits then print the number//
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    int hundreds,thousands,first_two_digits,last_two_digits,reverse_last_two_digits;
    first_two_digits=x%100;
    last_two_digits=x/100;
    hundreds=last_two_digits%10;
    thousands=last_two_digits/10;
    reverse_last_two_digits=(hundreds*10)+thousands;
    y=(reverse_last_two_digits*100)+first_two_digits;
    printf("%d",y);
    }
