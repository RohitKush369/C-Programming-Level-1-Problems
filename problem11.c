#include<stdio.h>
int main()
{
    int x,y,z,sum;
    printf("Enter Number:");
    scanf("%d",&x);
    y=x%10;
    z=x/10;
    sum=y+z;
    printf("%d",sum);
}
