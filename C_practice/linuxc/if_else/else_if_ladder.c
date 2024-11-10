#include<stdio.h>
int main()
{
int stu;
float m1,m2,m3,m4,sum,per;
char grade;
printf("enter the no. of students: ");
scanf("%d",&stu);
for(int i=1;i<=stu;i++)
{
	printf("Enter marks of four subject of student %d:\n",i);
	scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
	sum = m1+m2+m3+m4;
	per = sum/4;
	if(per>=85)
		grade ='A';
	else if(per>=70)
		grade ='B';
	else if(per>=55)
		grade ='C';
	else if(per>=40)
		grade ='D';
	else
		grade ='E';
	printf("the marks of student %d is %f percent and Grade is %c\n",i,per,grade);
}
return 0;
}
