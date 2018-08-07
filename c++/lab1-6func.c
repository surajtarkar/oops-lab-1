#include<stdio.h>
#include<string.h>
void rev(char a[100]) 
{
   int i;
   
   int l=strlen(a);
   for(i=l-1;i>=0;i--)
   printf("%c", a[i]);
   
}

int main()
{
	char s[100];
	printf("enter a string\n");
	gets(s);
	printf ("reverse of the string is =");
	rev(s);
	getche();
	return 0;
}

