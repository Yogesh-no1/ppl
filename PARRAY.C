#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=5;
int *p;
p=&a;
printf("\n value of a=%d",a);
printf("\n value of a using pointer=%d\n",*p);
printf("address of a=%d",p);
getch();
}