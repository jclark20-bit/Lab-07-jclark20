#include <stdio.h>
int larger(int a, int b);

int main()
{
    int first;
    int second;

    printf("please enter two integers: ");
    scanf("%d %d", &first, &second);

    printf("Largerest integer is: %d\n", larger(first, second));

    return 0;

}

int larger(int a, int b){
    if (a >b){
        return a;
    }
    else{
        return b;

    }

    }

    
