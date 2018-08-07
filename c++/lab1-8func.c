#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{char *p,*q;
int i,l=0,m=0;
p=(char*)malloc(20);
q=(char*)malloc(20);
printf("enter the string 1");
fgets(p,20,stdin);
printf("enter the string 2");
fgets(q,20,stdin);
l=strlen(p);
m=strlen(q);
l=l-1;
for(i=0;i<m;i++,l++)
*(p+l)=*(q+i);
puts(p);
getch();

}
