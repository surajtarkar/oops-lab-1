#include <stdio.h>

int main(void)
{
	int a[10], i=0, j=0, n, t,ch;

	printf ("\n Enter the no. of elements: ");
	scanf ("%d", &n);
	printf ("\n");

	for (i = 0; i <n; i++)
	{
		printf ("\n Enter the %dth element: ", (i+1));
		scanf ("%d", &a[i]);
	}
	printf("1\tAscending order\n2\tDescending orer\n");
	scanf("\n%d",&ch);
	switch (ch)
	{
		case 1 :
	for (j=0 ; j<(n-1) ; j++)
	{
		for (i=0 ; i<(n-1) ; i++)
		{
			if (a[i+1] < a[i])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}

	printf ("\n Ascending order: ");
	for (i=0 ; i<n ; i++)
	{
		printf (" %d", a[i]);
	}
	break;
	case 2 :
		for (j=0 ; j<(n-1) ; j++)
	{
		for (i=0 ; i<(n-1) ; i++)
		{
			if (a[i+1] < a[i])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
	printf ("\n Descending order: ");
	for (i=n ; i>0 ; i--)
	{
		printf (" %d", a[i-1]);
	}
	break;
      return 0;
}
}

