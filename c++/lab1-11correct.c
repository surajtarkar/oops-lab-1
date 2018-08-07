#include <stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
main()
{
char *c,*b,*a;
c=(char *)malloc(40);
b=(char *)malloc(40);
a=(char *)malloc(40);
int n=0,i,j,l=0,k=0,m=0;
printf("Enter any string");
gets(c);
m=strlen(c);
printf("Now enter the word that you want to search\n");
gets(a);
l=strlen(a);
for(i=0;i<m;i++)
{
   if(c[i]!=' ')
b[k++]=c[i];
if((c[i]==' ')||(i==m-1))
{
    for(j=0;b[j]!='\0';j++)
{
    if(a[j]==b[j])
    n++;

}
if(n==l)
    break;
for(j=0;b[j]!='\0';j++)
{
    b[j]=0;
}
k=0;
}
}
    if(n==l)
printf("word found!!!");
else
    printf("not found");
    getch();
}
