#include<stdio.h>
int main()
{
   int x,y;
   printf("Enter Number:");
   scanf("%d",&x);
   int ones,tens,a,sum;
   ones=x/10;
   tens=x%10;
   sum=ones+tens;
   a=sum%2;
   y=x-(a*5);
   printf("%d",y);

}
