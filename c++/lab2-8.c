#include<stdio.h>
#include<conio.h>
void ltr(int array[3][3]);
void main()
{
int array[3][3], i, j, flag = 0 ;
printf("Enter the values of Matrix : \n");

ltr(array);

}

void ltr(int array[3][3])
{
	int i, j, flag = 0 ;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
scanf("%d", &array[i][j]);
}
}
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
if (array[i] < array[j] && array[i][j] == 0)
{
flag = flag + 1;
}
}
}
if (flag == 3)
printf("\n\n Matrix is a Lower triangular matrix");
else
printf("\n\n Matrix is not a lower triangular matrix");
 getche();
 
}
