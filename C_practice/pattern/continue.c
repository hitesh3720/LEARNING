#include<stdio.h>
int main()
{
int i=1,input,sum=0;
float avg;
printf("enter 10 positive numbers :\n" );
while(i<=10)
	{
	 printf("enter no  %d : ",i);
	 scanf("\n %d",&input);
	if(input<0)
		{
		 printf("enter positive nos. only");
		 continue;
		} 
	sum=sum+input;
	i+=1;	
	}
avg = sum/10.00;
printf("the avg  is %f",avg);
}
