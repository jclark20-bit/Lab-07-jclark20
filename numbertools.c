#include <stdio.h>

int countDigits(int n);
int sumToN(int n);
int isEven(int n);

int main()
{
        int number;

    int digits;
        int sum;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    digits = countDigits(number);
    sum = sumToN(number);

    printf("Digits: %d\n", digits);
    printf("Sum from 1 to %d: %d\n", number, sum);

    if (isEven(number))
    {
        printf("%d is an even number.\n", number);
    }
    else
    {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}

    int countDigits(int n)
{
        int count = 0;

    while (n != 0)
    {
        n = n / 10;
        count++;
    }

      return count;
}

    int sumToN(int n)
{
    int i;
    int sum = 0;

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

    int isEven(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}