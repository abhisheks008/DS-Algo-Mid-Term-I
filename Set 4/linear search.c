#include <stdio.h>
int main()
{
    int num, i,  keynum, found = 0;
    printf("Enter the number of elements : \n");
    scanf("%d", &num);
    int array[num];
    printf("\nEnter the elements one by one : \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nEnter the element to be searched : \n");
    scanf("%d", &keynum);
    for (i = 0; i < num ; i++)
    {
        if (keynum == array[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("\nElement is present in the array at position : %d\n",i+1);
    else
        printf("\nElement is NOT present in the array\n");
return 0;
}
