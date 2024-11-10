#include<stdio.h>
#include<stdarg.h>
int sum(int,...);
int main()
{
	printf("total = %d\n",sum(2,99,68));
	printf("total=%d\n",sum(3,11,79,32));
}
int sum(int num,...)
{
	int i;
	va_list ap;
	int arg,total = 0;
	va_start(ap,num);
	for(i=0;i<num;i++)
	{
		arg=va_arg(ap,int);
		printf("%d",arg);
		total+=arg;
	}
	va_end(ap);
	return total;
}

