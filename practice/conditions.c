#include <stdio.h>

int main()
{ 
    int a;
    int b;
    int c;
    printf("enter 3 numbers :\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    switch (a > b && a > c) {
        case 1: {
            printf("%d is the largest number\n", a);
            break;
        }
        case 0: {
            switch (b > a && b > c) {
                case 1: {
                    printf("%d is the largest number\n", b);
                    break;
                }
                case 0: {
                    printf("%d is the largest number\n", c);
                    break;
                }
            } 
        }
    }
    return 0;
}