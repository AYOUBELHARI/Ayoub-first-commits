#include <stdio.h>

int strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

char login_system(char *username, char *password) {
    const char* valid_username = "admin";
    const char* valid_password = "PassWord10#";
    if (strcmp(username, valid_username) == 0 && strcmp(password, valid_password) == 0) {
        printf("Login successful!\n");
        return 1; // Login successful
    } else {
        printf("Login failed!\n");
        return 0; // Login failed
    }
}

int main() {
    char username[50];
    char password[50];

    printf("Enter username: ");
    scanf("%49s", username);
    printf("Enter password: ");
    scanf("%49s", password);
    login_system(username, password);
    return 0;
}