#include<stdio.h>
int main()
{
int num,pos;
printf("enter the number and position : ");
scanf("%d %d",&num,&pos);
num=num|(1<<pos);
printf("after setting the bit the no is : %d",num);
return 0; 
}
