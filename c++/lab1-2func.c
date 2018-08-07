9po#include<stdio.h>
#include<conio.h>
#define MAX 100     // maximum no of elements of array
int sortAsn(int);
int sortDsn(int);
int array[MAX];
int main()
{
  int i,size,ch,n;
  printf("Enter the size of array: ");
  scanf("%d",&size);
  printf("Enter the %d elements of array: \n",size);
  for(i=0;i<size;i++)
  {
   printf("\narray[%d]=",i);
   scanf("%d", &array[i]);
  }
  printf ("Now Enter choice\n1.Ascending\n2.Descending\n");
  scanf("%d",&ch);
  switch (ch)
  {
  	case 1:

  sortAsn(size);    //calling sortArray() function
   printf("The Sorted elements of array are:\n");
   for(i=0;i<size;i++)
   {
     printf(" %d",array[i]);
   }
   getch();
   return 0;
break;
	case 2:
		sortDsn(size);
		printf("The Sorted elements of array are:\n");
   for(i=0;i<size;i++)
   {
     printf(" %d",array[i]);
   }
   getch();
   return 0;
   break;
}
}
sortAsn(n)   // function for sorting array elements
{
  int temp=0,i,j;   // temp var is temporary variable used for swapping
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(array[i]>array[j])
      {
        temp=array[i];   //swapping for the array to be sorted
        array[i]= array[j];
        array[j]=temp;
      }
    }
  }
}
sortDsn(n)   // function for sorting array elements
{
  int temp,i,j;   // temp var is temporary variable used for swapping
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(array[j]<array[j+1])
      {
        temp=array[j];   //swapping for the array to be sorted
        array[j]= array[j+1];
        array[j+1]=temp;
      }
    }
  }
}
