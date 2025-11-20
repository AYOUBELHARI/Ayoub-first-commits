#include <stdio.h>

int recursion(int n)
{
    if(n == 0)
        return 1;
    else
        return n * recursion(n - 1);
}

int main ()
{
    for(int i = 0; i < 100; i++){
        if(i == 99)
            printf("%d.\n", i + 1);
        else
        printf("%d, ", i + 1);
    }

    int N;
    int i = 1;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d.", &N);

    while(i <= N){
        sum += i;
        i++;
    }

    printf("Sum of first %d natural numbers is %d.\n", N, sum);
    printf("Factorial of %d is %d.\n", N, recursion(N));

    return 0;
}