//passing full arr to a fxn and squares the each elem of arr and their sum
#include<stdio.h>
void square(int[],int);
int main()
{
int arr[6]={1,2,3,4,5,8};
square(arr,6);
printf("\nelems of array now:{");
for(int i=0;i<6;i++)
{
printf(" %d",arr[i]);
}
printf("}\n");
}
void square(int val[],int n)
{
int total=0;
for(int i =0 ;i <n ;i++)
{
val[i]=val[i]*val[i];
total+=val[i];
}
printf("The Total is: %d",total);
}
