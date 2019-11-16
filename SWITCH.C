#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a,b,c,ch;
printf("1-addition\n");
printf("2-subtraction\n");
printf("3-multiply\n");
printf("4-division\n");
printf("enter your choice (1-4)\n");
scanf("%d",&ch);
switch(ch)
{
case1: c=a+b;
printf("%d",&c);
break;
case2: c=a-b;
printf("%d",c);
break;
case3: c=a*b;
printf("%d",c);
break;
case4: c=a/b;
printf("%d",c);
break;
default:
printf("you have enter wrong choice");
}
return 0;
}