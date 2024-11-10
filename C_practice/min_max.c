//[7,2,3,9,4,6,5] | | o/p = 2 9
#include<stdio.h>
int min(int arr[],int size)
{

    int mini=100;
    for(int i =0;i<size;i++)
    {
        if(arr[i]<mini)
        {mini=arr[i];}
    }
    return mini;
}
int max(int arr[],int size)
{
    int maxi=0;
    for(int i =0;i<size;i++)
    {
        if(arr[i]>maxi)
        {maxi=arr[i];}
    }
    return maxi;
}
int main()
{
    int arr[]={7,2,3,9,4,6,5};
    
    printf("the maximum & minimum value is :%d %d\n",min(arr,7),max(arr,7));
    return 0;

}