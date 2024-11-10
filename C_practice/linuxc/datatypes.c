#include<stdio.h>
char c;
int a;
char str[50]=" " ;
float mean;
int main()
{
printf("enter the values:");
scanf("%c %d %s %f",&c,&a,str,&mean);
printf("the values are: %c\n%d\n%s\n%f",c,a,str,mean);
return 0;
}
