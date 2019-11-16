#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={1,2,3,4,5};
int *p;
p=a;
printf("printing the array element using pointer");
for(int i=0;i<5;i++)
{
printf("\n%d",*p);
p++;
}
getch();
}