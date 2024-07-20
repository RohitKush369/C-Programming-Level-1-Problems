#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter first Number;");
    scanf("%d",&x);
    printf("Enter Second Number:");
    scanf("%d",&y);
    int ones,tens,sum;
    if(x>y)
    {

    ones=x%10;
    tens=x/10;
    sum=ones+tens;
    printf("%d",sum);
    }
    else
    {
        ones=y%10;
        tens=y/10;
        sum=ones+tens;
        printf("%d",sum);
    }
}
