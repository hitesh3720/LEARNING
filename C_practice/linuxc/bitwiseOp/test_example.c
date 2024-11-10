#include<stdio.h>
int DIRTY  = 0x01;
int OPEN   = 0x02;
//int VERBOSE= 0x04
//int RED    = 0X08
//int SEASICK= 0x10
int main()
{
	unsigned int flags;
	printf("enter the flag input for cases:\n1-->DIRTY\n2-->OPEN\n");
	scanf("%d",&flags);
	if(flags & DIRTY)
	{
		printf("welcome dirty/clean case");
	}
	if(flags & OPEN)
	{
		printf("welcome to OPEN/close case");
	}
	else 
	{
		printf("WRONG SELECTION TRY AGAIN");
	}	
}
