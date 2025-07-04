#include <stdio.h>

int main() {
    char Name[50];
    int Age = 0;

    printf("Enter your name: ");
    scanf("%49s", Name);  // ไม่ต้องใช้ & กับ array of char :contentReference[oaicite:1]{index=1}

    printf("Enter your age: ");
    scanf("%d", &Age);    // ต้องใช้ & กับตัวแปรที่ไม่ใช่ array :contentReference[oaicite:2]{index=2}

    printf("-----------------\n");

    printf("Hello %s\n", Name);
    printf("Age = %d\n", Age);

    return 0;
}