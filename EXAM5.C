#include <stdio.h>


void swap(int *a, int *b) 
{
    int T = *a;
    *a = *b;
    *b = T;
}

int main() 
{
    int n1,n2;

    printf("Enter the first number=> ");
    scanf("%d",&n1);
    printf("Enter the second number=> ");
    scanf("%d",&n2);

    printf("first swapping: n1 = %d, n2 = %d\n",n1,n2);

   
    swap(&n1,&n2);

    printf("second swapping: n1 = %d, n2 = %d\n",n1,n2);

    return 0;
}
