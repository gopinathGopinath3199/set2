#include<stdio.h>
#include<conio.h>
void main()
{
int a,temp,reverse;
printf("enter the input");
scanf("%d",&a);
temp=a;
while(temp!=0)
{
reverse=reverse*10;
reverse=reverse+(temp%10);
temp=temp/10;
}
if(reverse==a);
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
