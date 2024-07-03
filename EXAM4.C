#include <stdio.h>


int sum_first_and_last_digits(int n) 
{
    int last_digit = n % 10;
    int first_digit;

    while (n >= 10) 
	{
        n /= 10;
    }
    first_digit = n;

    return first_digit + last_digit;
}

int main()
{
    int num;

    printf("Enter a number=> ");
    scanf("%d", &num);

    int result = sum_first_and_last_digits(num);
    printf("Sum of first and last digits: %d\n", result);

    return 0;
}
