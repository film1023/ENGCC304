#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    if(scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Invalid input\n");
        return 1;
    }

    int i = n;
    while(i >= 2) {
        int isPrime = 1;
        int j = 2;
        while(j * j <= i) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
            j++;
        }
        if(isPrime)
            printf("%d ", i);
        i--;
    }
    printf("\n");
    return 0;
}
