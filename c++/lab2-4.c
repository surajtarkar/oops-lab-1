#include<stdio.h>
void addmul(int , int);
int main()
{
	int a,b;
	printf("Enter any two numbers to multiply\n");
	addmul(a,b);
	return 0;
}

void addmul(int p, int q)
{
	int i ,sum=0;
	scanf("%d %d",&p,&q);
	for(i=0;i<q;i++)
	sum=sum+p;
	printf("multiplication of %d and %d is=%d",p,q,sum);
}

