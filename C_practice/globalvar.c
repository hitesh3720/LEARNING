#include<stdio.h>
int main()
//int multiply(int);
{
int x,k;
printf("enter the value of x");
scanf("%d",&x);
k= x * x++;
printf("the value of k is :%d",k);
}
/*int multiply(int x)
{
return x*x++;
}*/
