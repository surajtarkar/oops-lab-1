#include<stdio.h>
#include<conio.h>
void main ()
{
	int i,n,sum;
	printf("enter any no.");
	scanf ("%d",&n);
sum=0;
for(i=2;i<n;i++)
{
	if (n%i==0)
	sum=sum+i;
}
if (sum==0)
printf ("prime no.");
else
printf ("not a prime no.");
getche ();
}
