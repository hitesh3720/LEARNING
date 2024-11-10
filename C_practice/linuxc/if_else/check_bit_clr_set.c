#include<stdio.h>
int main()
{
int num,pos;
printf("enter number and index\n");
scanf("%d %d",&num,&pos);
if((num &(1<<pos))==0)
	printf("\n%d bit is clear",pos);
else
	printf("\n%d bit is set",pos);
return 0;
}
