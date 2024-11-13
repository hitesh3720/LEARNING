#include<stdio.h>
int main()
{
 int key,arr[20],rem;
 printf("enter decimal no. : ");
 scanf("%d",&key);
 //in while loop we can use val of i as it exited from loop here i=0 then while loop (leti=4) for_loop  i worked as =4
 // in for loop case in place of while i worked as i=0 after foor loop termnated in next for loop 
int i=0;
while(key)
{
    rem=key%2;
    key=key/2;
    arr[i]=rem;
    i++;
}
for(int j=i-1;j>=0;j--)
{
    printf(" %d",arr[j]);
}
printf("\n");
return 0;
}
