#include<stdio.h>
void check(int);
int main()
{
int i,arr[10];
for(i =0;i<10;i++)
{
printf("enter the val of array[%d]",i);
scanf("%d",&arr[i]);
check(arr[i]);
}
}
void check(int num)
{
if(num%2==0)
printf("%d is even\n",num);
else
printf("%d is Odd\n",num);
}
