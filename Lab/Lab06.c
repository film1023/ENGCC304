#include <stdio.h>

int main() {
    int N;
    //printf("Enter value: ");
    if (scanf("%d", &N) != 1) {
        printf("กรุณาใส่ตัวเลข\n");
        return 1;
    }
    printf("Show Number:");
    if (N % 2 != 0) { // Check for odd number
        for (int i = 1; i <= N; i += 2) {
            printf(" %d", i);
        }
    } else { // Check for even number
        for (int i = N; i >= 0; i -= 2) {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}
