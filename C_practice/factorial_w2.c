#include<stdio.h>
long int fact(long int);
int main()
{
int num;
printf("enter the value :");
scanf("%d",&num);
if(num<0)
printf("no factorial for negative nos\n");
else 
printf("factorial of %d is %ld \n",num,fact(num));
return 0;
}
long int fact(long int num)
{
int i,f=1;
if(num==0)
return 1;
for(i=num;i>1;i--)
f=f*i;
return f;
}
