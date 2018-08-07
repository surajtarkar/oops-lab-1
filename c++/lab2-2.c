#include<stdio.h>
#include<conio.h>
void series(int n);
int main()
{
int n;
printf("Enter the n i.e. max values of series: ");
scanf("%d",&n);
series(n);
getche();
return 0;
}

void series(int n)
{

int sum=0,i;
sum = (n * (n + 1) * (2 * n + 1 )) / 6;
printf("Sum of the series : ");
for (i =1;i<=n;i++) {
if (i != n)
 printf("%d^2 + ",i);
else
printf("%d^2 = %d ",i,sum);

}
} 
