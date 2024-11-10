#include<stdio.h>
int main()
{
long double sum; 
int a,b,c;
sum=(a=10,b=20,c=30,a+b+c);
printf("%Lf is the sum \n",sum);
printf("%lu",sizeof(sum));
return 0;
}

