//123=321; 123%10=3(digit)->123/10=12/10=1(termination);ans=ans*10+digit;
#include<stdio.h>
int main()
{
 int rev,i=0,digit=0,sum=0;
 printf("enter a num:");
 scanf("%d",&rev);
 while(rev!=0)
 {
    digit=rev%10;
    rev=rev/10;
    sum=sum*10+digit;
    printf("%d",digit);
    //{we can use sum or direct print digit in loop }
    i++;
 }
 printf("\n%d\n",sum);
 return 0;
}