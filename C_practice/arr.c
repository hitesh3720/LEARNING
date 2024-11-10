//#INCLUDE<STDIO.H>
#include<stdio.h>
int main()
{
int i,arr[10],sum=0;
for(i =0;i<10;i++)
	{
	printf("enter the values of arr[%d]:",i);
	scanf("%d",&arr[i]);
	sum+=arr[i];
	}
	printf("%d is the sum of %d elements of array",sum,i);
	printf("\nTHE SUM IS : %d\n",sum);
}
