#include <stdio.h>

int main(void)
{

    int a;
    int b;
    int result;

    printf("Enter number (a): ");
    scanf("%d", &a);
    printf("Enter number (b): ");
    scanf("%d", &b);

    result = 1;
    int i = 0;
    while(i < b)
    {
        if (b == 0)
        {
            break;
        }
        result *= a;
        i++;
    }

    printf("%d ouss %d hia : %d\n", a, b, result);

    return (0);
}
