# primenum
#include<stdio.h>
int main()
{
int i,n=0;
while(n<=300)
i=2;
while(i<n)
{
if(n%i==0)
break;
else
i++;
}
if(n==i)
printf("%d",n);
n++;
}
