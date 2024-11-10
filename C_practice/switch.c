#include<stdio.h>
int main()
{
int choice;
printf("enter your choice :");
scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("first\n");
case 2:	
	printf("second\n");
case 3:
	printf("3rd\n");
default :
	printf("invalid choice\n");	
}
}
