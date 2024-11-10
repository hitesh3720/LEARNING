//5!=5*4*3*2*1=120
#include<stdio.h>
int main()
{
 int val,fact=1,i=1;
 printf("enter the no.:");
 scanf("%d",&val);
 printf("%d! =",val );
 while(i<=val)
 {
    fact=fact*i;
    printf(" * %d",i);
    i++;
 }   
 printf(" = %d\n",fact);
 return 0;
}