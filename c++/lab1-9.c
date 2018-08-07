 #include<stdio.h> 
 int main() 
 { 
 char str[100],*ptr,c,d;
  printf("Enter any string\n"); 
  gets(str);
   printf("Enter the character you want to replace and by what?\n");
    scanf("%c %c",&c,&d);
	 ptr=str;
	  for(;*ptr!='\0';ptr++) 
	  { 
	  if(*ptr==c)
               *ptr=d; 
	  } 
	  printf("Final string is\n"); 
	  puts(str);
	   return 0; 
	   } 

