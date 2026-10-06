#include <stdio.h>
void changeValue(int x);
int main(void)
{
int number = 10;
printf("Before: %d\n", number);
changeValue(number);
printf("After: %d\n", number);
return 0;
}
void changeValue(int x)
{
x = 50;
printf("Inside function: %d\n", x);
}
