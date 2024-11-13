#include<stdio.h>
int fib(int);
int main()
{
int n ;
printf("Enter number:");
scanf("%d",&n);
printf("Series is :");
for(int i = 0 ; i < n;i++)
printf("%d",fib(i));
}
int fib(int n)
{
if(n<=1)
return n;
else 
return fib(n-1)+fib(n-2); 
}

