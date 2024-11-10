//0 1 (0+1)1 (1+1)2 (1+2)3 (2+3)5 ....
#include<stdio.h>
int main()
{
    int n,a=0,b=1;
    printf("enter the val :");
    scanf("%d",&n);
    printf("the f series is : %d  %d",a,b);
    int sum=0;
    for(int i=2;i<n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("  %d",sum);
    }
    printf("\n");
    return 0;
}