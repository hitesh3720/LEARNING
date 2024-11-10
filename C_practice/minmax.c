#include<stdio.h>
int main()
{
int i,arr[10]={34,12,78,65,4,36,7,6,2,9};
int min,max;
 min=max=arr[0];
printf("assign 0 th index value i.e. %d\n and the arr[10] is:{%d",arr[0],arr[0]);
for(i=1;i<10;i++)
{
printf(" %d",arr[i]);
if(arr[i]<min)
{min=arr[i];}
if(arr[i]>max)
{max=arr[i];}
}
printf("}\nthe minimum and maximum in the given array is %d and %d respectively. ",min,max);
}
