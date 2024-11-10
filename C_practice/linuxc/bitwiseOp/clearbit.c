#include<stdio.h>
int main()
{
int num,pos;
printf("enter the no and pos : ");
scanf("%d %d",&num,&pos);
//pos=pos-1;for better understanding otherwise index of pos is 0;
num = num &(~(1<<pos));
printf("after clearing the bit the no is : %d\n",num );
return 0;
}
