#include <stdio.h>
#include <stdlib.h>
void larg(float *data,int num);
int main()
{
    int num;
    float *data;

    printf("Enter total number of elements(1 to 100): ");
    scanf("%d", &num);

    data = (float*) calloc(num, sizeof(float));
    printf("\n");
	larg(&data,num);
	 return 0;
}

	void larg(float *data,int num)
	{
		 int i;
    for(i = 0; i < num; ++i)
    {
       printf("Enter Number %d: ", i + 1);
       scanf("%f", data + i);
    }

    for(i = 1; i < num; ++i)
    {
       if(*data < *(data + i))
           *data = *(data + i);
    }

    printf("Largest element = %.2f", *data);

	}
