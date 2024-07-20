
#include<stdio.h>
int main ()
{
            int x,y;
            printf("Enter Number :");
            scanf("%d",&x);
            int tens,a,b;
            b = x / 10;
            tens = b % 10;
            a = tens % 2;
            y = x - (a * 5);
            printf("%d",y);
}
