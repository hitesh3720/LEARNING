#include<stdio.h>
int main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
if(num % 2 == 0)
	goto even;
else 
	goto odd;
even:
	printf("%d is even number.",num);
	goto end;
odd:
	printf("%d is odd number.",num);
	goto end;
end:
	printf("\n");
return 0;
}
