#include<stdio.h>
int main()
{
	int i=1,sum=0,num;
	float avg;
	while(i<=10)
	{
		printf("enter no %d : ",i);
		scanf("%d",&num);
		if(num<0)
		{	
			printf("\n ----->OOPS<-----\nenter positive numbers only\n");
			continue;
		}
		sum=sum+num;
		i++;
	}
	avg=sum/10.0;
printf("the sum & avg of %d +ve nos are : %d and %f respectively.\n",--i,sum,avg);
return 0;
}
