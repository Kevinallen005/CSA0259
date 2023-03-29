#include<stdio.h>
int main()
{
	int size,arr[size],i,k,j;
	printf("enter the size of the string=");
	scanf("%d",&size);
	printf("enter the string values=\n");
	for (i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);
    }
    printf("input array is = \n ");
    for (i=0;i<size;i++)
    {
	printf("%d \t",arr[i]);
    }
    printf("\n the reversed array is = \n");
    for (i=size-1;i>=0;i--)
    {
      printf("%d\t",arr[i]);
	}
	return 0;
}
