#include<stdio.h>
struct ABC
{
	int a;
	float b;
	char c;
};

int main ()
{
	struct ABC *O;
	struct ABC *ptr=O ;
	ptr++;
	printf ("%d",ptr);
	int n;
	int *x,*y;
	x=&n;
	y=n+1;
	printf ("size of n=%d",n=(char *)(y)-(char *)(x));
	
}
