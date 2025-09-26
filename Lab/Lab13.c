#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int num1, num2;
    
    printf("Enter num1 :\n");
    if (scanf("%d", &num1) != 1) {
        printf("Error: Invalid input for num1.\n");
        return 1;
    }
    
    printf("Enter num2 :\n");
    if (scanf("%d", &num2) != 1) {
        printf("Error: Invalid input for num2.\n");
        return 1;
    }
    
    if (num1 == num2) {
        printf("Error: num1 and num2 must be different.\n");
        return 1;
    }
    
    printf("Before swap (num1 & num2) : %d, %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swap (num1 & num2) : %d, %d\n", num1, num2);
    
    return 0;
}
