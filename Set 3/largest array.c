#include<stdio.h>
int main()
{
	int size, i, largest;
	printf("Enter the size of the array : \n");
	scanf("%d",&size);
	printf("\n");
	int array[size];
	printf("Enter %d elements of the array : \n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\n");
	largest = array[0];
	for(i=1; i<size; i++)
	{
		if(largest < array[i])
		largest = array[i];
	}
	printf("Largest element present in the given array is : \n%d",largest);
	printf("\n");
	return 0;
}
