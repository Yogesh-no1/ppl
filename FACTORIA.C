#include<stdio.h>
#include<conio.h>
 main()
{
clrscr();
int n,*p,f=1,i;
printf("enter a number of factorial");
scanf("%d",&n);
p=&f;
for(i=1;i<=n;i++)
{
*p=(*p)*i;
}
printf("\n factorial=%d",f);
getch();
}