#include<stdio.h>
long fxn(void);
int main()
{
printf("%ld\n",fxn());
}
long fxn(void)
{
int num;
long s;

for(num=1;num<=25;num++)
{
printf("%d",num);
if(num%2!=0)
s+=num*num;
}
return s;
}
