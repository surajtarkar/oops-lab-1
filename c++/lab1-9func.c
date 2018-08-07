 #include<stdio.h> 
 void replace(char str[],char *ptr);
 int main() 
 { 
 char str[100],*ptr;
  printf("Enter any string\n"); 
   replace(str,&ptr);
 
   
    return 0;
}

 void replace(char str[],char *ptr)
 {
 	char c,d;
 	
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
	  
 } 

