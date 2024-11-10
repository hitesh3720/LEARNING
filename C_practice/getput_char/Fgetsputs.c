#include<stdio.h>
int main()
{
char str[50];
printf("enter a string with spaces");
fgets(str,sizeof(str),stdin);
printf("entered  string with spaces");
puts(str);
return 0;
}
