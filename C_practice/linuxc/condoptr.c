#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter four nos. to check which one is greater :\n");
scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
a>b && c>d ?
	 a>c ?
		 printf(" %d is greatest\n",a)
		:
	 	 printf(" %d is greatest\n",c)
	:
	 b>d ?
		 printf(" %d is greatest\n",b)
		:
		 printf(" %d is greatest\n",d);
return 0; 
}
