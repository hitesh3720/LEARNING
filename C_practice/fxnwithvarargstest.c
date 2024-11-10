#include<stdio.h>
#include<stdarg.h>
int product(int,...);
int main()
{
	printf("\nProduct=%d\n",product(3,1,3,4));
	printf("\nProduct=%d\n",product(3,1,4,5));

}

int product(int num,...)
{
va_list ap;
int x,prod=1;
va_start(ap,num);
for(int i = 0;i<num;i++)
{
x=va_arg(ap,int);
prod=prod*x;
}
va_end(ap);
return prod;
}
