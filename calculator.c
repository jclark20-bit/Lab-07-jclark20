
#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main()
{
    int first;
    int second;

    printf("Enter two integers please: ");
    scanf("%d %d", &first, &second);

    printf("Sum: %d\n", add(first, second));
    printf("Difference: %d\n", subtract(first, second));
    printf("Product: %d\n", multiply(first, second));

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

