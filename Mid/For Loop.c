#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    if(scanf("%d", &n) != 1 || n < 1) {  // ตรวจสอบว่าเป็นจำนวนเต็มบวก
        printf("Error : Invalid input\n");
        return 1;
    }

    for(int i = n; i >= 2; i--) {
        int isPrime = 1;
        for(int j = 2; j*j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
