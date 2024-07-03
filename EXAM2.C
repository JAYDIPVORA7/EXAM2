#include <stdio.h>

void add_arrays(int array1[],int array2[],int result[],int size) 
{
    for (int i=0;i<size;i++) 
	{
        result[i] = array1[i] + array2[i];
    }
}

int main() 
{
    int size;

    printf("Enter the size of the arrayays=> ");
    scanf("%d", &size);

    int array1[size],array2[size],result[size];

    printf("Enter elements of the first arrayay=> \n");
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of the second arrayay:\n");
    for (int i = 0; i < size; i++) 
	
	{
        scanf("%d", &array2[i]);
    }

    add_arrayays(array1, array2, result, size);

    printf("Resultant arrayay after addition:\n");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
