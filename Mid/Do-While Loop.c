#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    if(scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Invalid input\n");
        return 1;
    }

    int i = n;
    if(n >= 2) {
        do {
            int isPrime = 1;
            int j = 2;
            do {
                if(j * j > i)
                    break;
                if(i % j == 0) {
                    isPrime = 0;
                    break;
                }
                j++;
            } while(1);

            if(isPrime)
                printf("%d ", i);
            i--;
        } while(i >= 2);
    }
    printf("\n");
    return 0;
}
