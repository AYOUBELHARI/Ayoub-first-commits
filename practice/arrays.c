#include <stdio.h>

float calculate_averege(int size, int array[size]) {
    int sum = 0;
    for (int q = 0; q < size; q++) {
        sum += array[q];
    }
    return (float)sum / size;
}

int print_the_largest(int size, int array[size]) {
    int largest = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }
    return largest;
}

void    swap(int *a, int *b) {
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

void    reverse_array(int size, int Array[size]) {
    for (int i = 0; i < size / 2; i++) {
        swap(&Array[i], &Array[size - 1 - i]);
    }
}

void    other_reverse_array(int size, int Array[size]) {
    int l = 0;
    int r = size - 1;
    while (l < r) {
        Array[l] += Array[r];
        Array[r] = Array[l] - Array[r];
        Array[l] -= Array[r];
        l++;
        r--;
    }
}

int main() {
    printf("How much numbers you want to enter: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The average is: %.2f\n", calculate_averege(n, arr));
    printf("The largest number is: %d\n", print_the_largest(n, arr));
    printf("Array elements went from this:\n");
    printf("[");
    for (int i = 1; i < n; i++) {    
        printf("%d,", arr[i - 1]);
    }
    printf("%d]\n", arr[n - 1]);
    printf("To this:\n");
    reverse_array(n, arr);
    printf("[");
    for (int i = 1; i < n; i++) {
        printf("%d,", arr[i - 1]);
    }
    printf("%d]\n", arr[n - 1]);
    other_reverse_array(n, arr);
    printf("And back to this:\n");
    printf("[");
    for (int i = 1; i < n; i++) {
        printf("%d,", arr[i - 1]);
    }
    printf("%d]\n", arr[n - 1]);
    return 0;
}