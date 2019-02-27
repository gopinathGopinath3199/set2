#include<stdio.h>
#include<conio.h>
void main()
{
int number,originalNumber,result=0,remainder,n=0;
printf("enter the value");
scanf("%d",&number);
originalNumber=number;
{
while(originalNumber!=0)
originalNumber/10;
n++;
}
originalNumber=number;
{
while(originalNumber!=0)
remainder=originalNumber%10;
result+=remainder*remainder*remainder;
orinalNumber/=10;
}
if(result==number)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
