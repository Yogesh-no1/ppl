#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,y,i,m;
int n;
clrscr();
printf("enter 2 numbers");
scanf("%f%f",&a,&b);
printf("what do you wanna do....????\n1,add\n2,subtract\n3,multiply\n4,divide:");
c=a+b;
y=a-b;
i=a*b;
m=a/b;
scanf("%d",&n);
switch(n)
{
case 1:
printf("%f",c);
break;
case 2:
printf("%f",y);
break;
case 3:
printf("%f",i);
break;
case 4:
printf("%f",m);
break;
}
getch();
}