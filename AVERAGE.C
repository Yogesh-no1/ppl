#include<stdio.h>
#include<conio.h>
void main()
{
int n,num[10],i;
float sum,avg;
clrscr();
printf("\n how many numbers?");
scanf("%d",&n);
sum=0;
printf("\n enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<n;i++)
{
sum=sum+num[i];
}
avg=sum/n;
printf("sum%d",sum);
printf("the average of %d numbers is =%f",n,avg);
getch();
}