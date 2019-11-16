#include<stdio.h>
#include<conio.h>
void swap(int *num1,int *num2);
void main()
{
int x,y;
printf("\n enter first number:");
scanf("%d:",&x);
printf("\n enter second number:");
scanf("%d",&y);
printf("\n before swaping x=%d and y=%d",x,y);
swap(&x,&y);
printf("\n after swaping x=%d and y=%d",x,y);
getch();
}
void swap(int *num1,int *num2)
{
int temp;
temp=*num1;
*num1=*num2;
*num2=temp;
}
