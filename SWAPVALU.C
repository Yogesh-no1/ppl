#include<stdio.h>
#include<conio.h>
void fnswap(int a,int b);
void main()
{
int no1,no2;
printf("enter two numbers:");
scanf("%d %d",&no1,&no2);
printf("\n before swap no1=%d and no2=%d",no1,no2);
fnswap(no1,no2);
getch();
}
void fnswap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("\n after swap no1=%d and no2=%d",x,y);
}