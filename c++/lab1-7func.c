#include <stdio.h>
#include <conio.h>
void found (char str[],char find[]);
int main()
{
char str[100],find[100];

printf("Enter the string :");
gets(str);
printf("Enter the string that you want to find : ");
gets(find);
found (str,find);
return 0;

}
void found (char str[],char find[])
{
int i,j,flag;
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

}

