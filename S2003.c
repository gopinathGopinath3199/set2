#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,flag=1;
printf("enter the value");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if flag(n%i=0)
{
flag==0;
break;
}
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
