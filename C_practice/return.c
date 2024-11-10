#include<stdio.h>
void rtn(int,float);
int main()
{
int age;
float ht;
printf("enter the age and height:");
scanf("%d %f",&age,&ht);
rtn(age,ht);
}
void rtn(int age,float ht)
{
if(age>25)
{
printf("age should be less than 25\n");
return;
}
if(ht<5)
{
printf("height should be more than 5\n");
return;
}
printf("selected\n");
}
