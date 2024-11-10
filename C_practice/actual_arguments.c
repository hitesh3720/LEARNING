#include<stdio.h>
int fxn(int);
int main()
{
int x;
printf("the number is :%d",fxn(x));
}
int fxn(int x)
{
int a,b,c,d,k;
printf("enter the values for a,b,c,d,k");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&k);
a=a*b;
b=c*d+k;
x=a+b;
return x;
}
