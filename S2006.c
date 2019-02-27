#include <stdio.h>
int main(void) 
{  
int a,b,i,j,flag=0;  
scanf("%d%d",&a,&b);
for(i=a;i<b;i++) 
{ 
	{
flag=0;	
	for(j=2;j<i;j++)
	{
		if(i%j==0) 
		flag=1;
		}
	if(i==1)
	{
		continue;
	}
	}
 if(flag==0)
		printf("%d ",i);
}
return 0;
}
