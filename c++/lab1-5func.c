/* Write a program to Calculate Power of a number using Function*/

#include<stdio.h>
#include<conio.h>
void main()
{
float power (float,int);
int b;
float a,p;
printf("Enter two numbers\n");
scanf("%f%d",&a,&b);
p=power(a,b);
printf("\n %f raise to %d=%f",a,b,p);
getch();
}
float power(float x,int y)
{
if(y==0)
return(1);
else
return(x*power (x,y-1));
}
