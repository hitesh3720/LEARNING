#include<stdio.h>
int main()
{
char operation;
int num1,num2;
printf("enter number 1 , operation and number 2 :");
scanf("%d%c%d",&num1,&operation,&num2);
switch(operation)
{
case '+':
	if(operation =='+')
	printf("num1 + num2 = %d",num1+num2);
case '-':
	if(operation =='-')
	printf("num1 - num2 = %d",num1-num2);
case '*':
	if(operation =='*')
	printf("num1 * num2 = %d",num1*num2);
case '/':
	if(operation =='/')
	printf("num1 / num2 = %d",num1/num2);
/*default:
	printf("enter valid operation");*/
}
}
