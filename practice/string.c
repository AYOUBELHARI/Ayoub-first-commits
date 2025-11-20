#include <stdio.h>
#include <string.h>

int count_vowels(char *str) {
    int count = 0;
    char vowels[] = "aeiouAEIOU";
    while (*str) {
        for (int i = 0; vowels[i] != '\0'; i++) {
            if (*str == vowels[i]) {
                count++;
                break;
            }
        }
        str++;
    }
    return count;
}

int main () {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int vowel_count = count_vowels(str);
    printf("there are %d vowels in %s\n", vowel_count, str);
    return 0;
}