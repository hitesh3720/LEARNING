#include<stdio.h>
int main()
{
int mat[3][4],i,j;
printf("Enter the values row-wise for MATRIX(3X4):\n ");
for(i=0;i<3;i++)
{
	for(j=0;j<4;j++)
	{
	scanf("%d",&mat[i][j]);
	}
}
printf("\nTHE MATRIX IS :\n");
for(i=0;i<3;i++)
{
	for(j=0;j<4;j++)
	{
	printf("%3d",mat[i][j]);	
	}
printf("\n");
}
}
