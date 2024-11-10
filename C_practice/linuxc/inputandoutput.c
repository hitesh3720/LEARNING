#include<stdio.h>
int main()
{
char  str[100];
//int age;
//float mean;
//printf("enter a character  , integer , float value ");
//scanf("%c %d %f",&ch,&age,&mean);
printf("enter string");
fgets(str,sizeof(str),stdin);
printf("the string is:" );
puts(str);
//printf("the values are %c %d %f",ch,age,mean);
return 0;
}
