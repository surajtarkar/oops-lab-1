#include <stdio.h>
#include <conio.h>
int main()
{
char str[100],find[100];
int i,j,flag;
printf("Enter the string :");
gets(str);
printf("Enter the srting that you want to find : ");
gets(find);
for(i=0;str[i];i++)
{
if(str[i]==find[0])
{
flag=1;
for(j=1;find[j];j++)
{
if(str[i+j]!=find[j])
{
flag=0;
break;
}
}
if(flag==1)
break;
}
}
if(flag==1)
printf("%s is found in %s at %d position",find,str,i+1);
else
printf("%s is not found in %s",find,str);
getch();
}

