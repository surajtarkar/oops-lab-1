#include <stdio.h>
#include <string.h>

#include<conio.h>
int main()
{
    char str1[] = "This is ", str2[] = "computer";

    //concatenates str1 and str2 and resultant string is stored in str1.
    strcat(str1,str2);

    puts(str1);    

getche();
    return 0;
}
