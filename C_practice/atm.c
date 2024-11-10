#include<stdio.h>
#include<stdlib.h>
int main()
{
int amount = 1000, deposit, withdraw;
int choice, pin, x = 0;
while (pin != 1122)
{
    printf("\nENTER YOUR SECRET PIN NUMBER:"); 
    scanf("%d", &pin);
}
while (1) {
printf("\n*******Welcome to SONISOFT ATM Service*******\n");
printf("1. Check Balance\n"); 
printf("2. Withdraw Cash\n"); 
printf("3. Deposit Cash\n"); 
printf("4. Quit\n");
printf("*********************************************\n\n");
printf("Enter your choice: "); 
scanf("%d",& choice);
switch(choice)
{
case 1:
printf ("\n YOUR BALANCE IN Rs :%d", amount); 
break;
case 2:
printf ("\n ENTER THE AMOUNT TO WITHDRAW: ");
scanf("%d",&withdraw); 
if(withdraw % 100 != 0)
printf("\nENTER YOUR SECRET PIN NUMBER:"); 
scanf("%d", &pin);
if(pin != 1122)
printf("\nPLEASE ENTER VALID PASSWORD\n");
{
printf ("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
}
if(withdraw > (amount - 500)) 
{
printf("\n INSUFFICIENT BALANCE"); 
}
else {
amount = amount - withdraw;
printf ("\n\n PLEASE COLLECT CASH");
printf ("\n YOUR CURRENT BALANCE IS %d", amount);
}
break; case 3:
printf ("\n ENTER THE AMOUNT TO DEPOSIT"); 
scanf("%d",&deposit);
amount = amount + deposit; 
printf("YOUR BALANCE IS %d", amount); 
break;
case 4:
printf("\n THANK YOU FOR USING ATM SERVICE ");
exit(0); 
}
}
return 0;
}