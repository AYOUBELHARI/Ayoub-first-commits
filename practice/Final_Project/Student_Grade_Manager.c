#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int AddStudent(FILE *file) {
    // Function to add a student record to the file
    file = fopen("students.txt", "a");
    if (file == NULL) {
        perror("Error opening file");
        return -1; // Error opening file
    }
    else {
        char name[20];
        int id;
        float grade;
        printf("Enter student name: ");
        scanf(" %[^\n]", name);
        printf("Enter student ID: ");
        scanf("%d", &id);
        printf("Enter student grade: ");
        scanf("%f", &grade);
        fprintf(file, "ID: %-5d || NAME: %-20s || GRADE: %.2f\n", id, name, grade);
        printf("Student record added successfully.\n" );
    }
    fclose(file);
    return 0;
}

int ViewStudents(FILE *file) {
    // Function to view all student records from the file
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return -1; // Error opening file
    }
    else {
        char line[100];
        printf("=== All Students ===\n");
        printf("ID || Name || Grade\n");
        printf("---------------------\n");
        if (fgets(line, sizeof(line), file) == NULL) {
            printf("No student records found.\n");
            fclose(file);
            return 0; // No records found
        }
        do {
            printf("%s", line);
        } while (fgets(line, sizeof(line), file) != NULL);
        printf("---------------------\n");
    }
    fclose(file);
    return 0;
}

int AverageStudentGrades(FILE *file) {
    // Function to calculate and display average grades of students
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return -1;
    }
    else {
        float total = 0.00;
        int count = 0;
        float grade;
        char line[100];
        if (fgets(line, sizeof(line), file) == NULL) {
            printf("No student records found to calculate average.\n");
            fclose(file);
            return 0; // No records found
        } else {
            do {
                sscanf(line, " ID: %*d || NAME: %*[^|] || GRADE: %f", &grade);
                count++;
                total += grade;
            } while (fgets(line, sizeof(line), file) != NULL);
        }
        if (count > 0) {
            float average = total / count;
            printf("Average Grade of Students: %.2f\n", average);
        } else {
            printf("No grades available to calculate average.\n");
        }
    }
    fclose(file);
    return 0;
}

int findstudentByID(FILE *file) {
    // Function to find a student by their ID
    file = fopen("students.txt", "r");
    if (file == NULL) {
        return -1;
    } else {
        int ID, found = 0;
        printf("Enter Student ID to search: ");
        scanf("%d", &ID);
        char line[100];
        while (fgets(line, sizeof(line), file) != NULL) {
            int studentID;
            if (sscanf(line, "ID: %d ||", &studentID) == 1 && studentID == ID) {
                printf("Student Found: %s", line);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Student with ID %d not found.\n", ID);
        }
    }
    fclose(file);
    return 0;
}

int main() {
    printf("=== Student Grade Manager ===\n");
    FILE *f = NULL;
    printf("1. Add Student\n");
    printf("2. View Students\n");
    printf("3. Average Student Grades\n");
    printf("4. Find Student by ID\n");
    printf("5. Exit\n");
    printf("Select an option: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
        AddStudent(f);
    } else if (choice == 2) {
        ViewStudents(f);
    } else if (choice == 3) {
        AverageStudentGrades(f);
    } else if (choice == 4) {
        findstudentByID(f);
    } else if (choice == 5) {
        printf("Exiting the program.\n");
    } else {
        printf("Invalid option selected.\n");
        return 0;
    }
}
    