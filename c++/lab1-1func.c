#include<stdio.h>
int find_largest(int [],int);
int main()
{
    	int arr[30],size,largest,i;
    	printf("Enter the size of the array maximum up to 30:");
	scanf("%d",&size);
	printf("Enter the %d integer numbers:\n",size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
    	largest = find_largest(arr,size);
    	printf("The largest element is: %d\n",largest);
	return 0;
    	
}
int find_largest(int arr1[],int size1)
{
    	int temp_larg,i;
    	temp_larg=arr1[0];
    	for(i=1;i<size1;i++)
            	{
    			if(arr1[i]>temp_larg)
    				temp_larg=arr1[i];
    		}
    	return(temp_larg);
}