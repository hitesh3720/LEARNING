#include<stdio.h>
int sum(int x,int y);
int main()
{
int a,b,s;
printf("Enter the value for a and b:");
scanf("%d%d",&a,&b);
s=sum(a,b);
printf("sum of %d and %d is %d\n",a,b,s);
}
int sum(int a , int b)
{
return a+b;
}
