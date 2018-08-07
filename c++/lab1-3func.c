#include<stdio.h>
#include<conio.h>
void search(int a[],int);
void main()
{
int a[5],i;
int ele;

printf("enter the array elements\n");
for (i=0; i<5; i++)
scanf("%d",&a[i]);
printf("Enter the element to be search\n");
scanf("%d",&ele);
search(a,ele);
}
// searching for the element{
void search(int a[],int ele)
{
int i,temp=0,pos=0;
for (i=0; i<5; i++)
{
if (a[i]==ele)
{
temp=1;
pos=i;
break;
}
}

if (temp==1)
printf("Element found %d , location=%d",ele,pos+1);
else
printf("Element not found\n");
} // end of main()
