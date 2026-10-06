#include <stdio.h>

int sumToN(int n);



int main()

{
    int n;
    int result;

    printf("Enter N: ");
    scanf("%d", &n);

    result = sumToN(n);
    printf("sum: %d\n", result);
    return 0;

}
int sumToN(int n){
    int i;
    int sum = 0;
    for(i = 1; i <= n; i++){
        sum += i;

    }
    return sum;

}





//sum is the acuumulator