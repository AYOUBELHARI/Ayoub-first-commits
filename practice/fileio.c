#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buffer[50];
    FILE* file = fopen("textfile.txt", "w");
    if (file == NULL) {
        printf("Error opening file");
        return 0;
    }
    else {
        printf("File opened successfully\n");
        printf("Enter some text to write to the file:\n");
        fgets(buffer, sizeof(buffer), stdin);
        fprintf(file, "%s", buffer);
        fclose(file);
        printf("Data written to file successfully\n");
    }
    printf("this is what was written to the file:\n");
    file = fopen("textfile.txt", "r");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);
    printf("Do you want to append more text to the file? (y/n): ");
    char ch[2];
    scanf("%s", ch);
    if (ch[0] == 'n' || ch[0] == 'N') {
        printf("No additional text entered. Exiting.\n");
        return 0;
    }
    else if (ch[0] == 'y' || ch[0] == 'Y') {
        char anotherBuffer[50];
        file = fopen("textfile.txt", "a");
        getchar(); // Clear newline character from input buffer
        printf("Enter additional text to append to the file: ");
        fgets(anotherBuffer, sizeof(anotherBuffer), stdin);
        fprintf(file, "\n%s", anotherBuffer);
        fclose(file);
        printf("Additional data appended to file successfully\n");
    }
    printf("Final content of the file:\n");
    file = fopen("textfile.txt", "r");  
    char max[50];
    while (fgets(max, sizeof(max), file) != NULL) {
        printf("%s", max);
    }
    fclose(file);
    return 0;
}