#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,flag=1,a,b;
printf("enter the value");
scanf("%d%d",&a,&b);
printf("prime numbers between%dand%d are:",a,b);
while(a>b)
{
flag=0;
for(i=2;i<=b/2;i++);
{
if(a%i==0)
{
flag=0;
break;
}
}
if(flag==1
printf("%d",a);
a++;
}
getch();
}

