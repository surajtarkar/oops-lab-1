#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{
    char c[20];
	char str1[10]= "awesome";
    char str2[10];
    char str3[10]; 
	char str4[] = "This is ", str5[] = "computer";
    strcat(str4,str5);

    puts(str4);    

    strcpy(str2, str1);
    strcpy(str3, "well");
    puts(str2);
    puts(str3);
    printf("Enter string: ");
    gets(c);

    printf("Length of string=%d \n",strlen(c));
    
getche();
    return 0;
}
