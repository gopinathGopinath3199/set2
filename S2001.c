#include<stdio.h>
#include<conio.h>
void main()
{
int base,power,result=1;
scanf("%d%d",&base,&power);
while(power!=0)
{
result=result*base;
power--;
}
printf("%d",result);
}
getch();
