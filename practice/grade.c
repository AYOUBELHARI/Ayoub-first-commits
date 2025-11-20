#include <stdio.h>

int main() {
    float ar, fr, math, svt, pc;
    printf("Enter grades for Arabic, French, Math, SVT, and PC\n");
    printf("ar: ");
    scanf("%f", &ar);
    ar *= 2;
    printf("fr: ");
    scanf("%f", &fr);
    fr *= 2;
    printf("math: ");
    scanf("%f", &math);
    math *= 5;
    printf("svt: ");
    scanf("%f", &svt);
    svt *= 3;
    printf("pc: ");
    scanf("%f", &pc);
    pc *= 4;
    float total = (ar + fr + math + svt + pc) / 16;

    switch (total >= 10) {
        case 1: {
            printf("Your grade is %.2f\n You succeeded\n", total);
            break;
        }
        case 0: {
            printf("Your grade is %.2f\n You failed\n", total);
        }
    }
    return 0;
}