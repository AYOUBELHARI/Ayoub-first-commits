#include <stdio.h>

int max(int a, int b) {
    int result;
    if (a > b) {
        result = a;
    } else if (b > a) {
        result = b;
    } else {
        result = 0;
    }
    return result;
}

int main() {
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    int maximum = max(num1, num2);
    if (maximum == 0) {
        printf("Both numbers are equal.\n");
    } else {
        printf("The maximum number is: %d\n", maximum);
    }   
    return 0;
}