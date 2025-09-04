#include <stdio.h>

int main() {
    int n;  //ประกาศตัวแปร n 
    printf("Enter number: ");
    if(scanf("%d", &n) != 1 || n < 1) { //ตรวจสอบจำนวนเต็มบวก ?
        printf("Error : Invalid input\n");
        return 1;
    }

    for(int i = n; i >= 2; i--) {   //วนลูปจาก n จนถึง 2 เพื่อตรวจสอบจำนวนเฉพาะ?
        int isPrime = 1;   //ตั้งค่าตัวแปร isPrime เป็น 1 (สมมติว่าจำนวนเฉพาะก่อน)
        for(int j = 2; j*j <= i; j++) {  //วนลูปตรวจสอบตัวหารจาก 2 จนถึง √i
            if(i % j == 0) {  //ถ้า i หารด้วย j ลงตัว หมายถึงไม่ใช่จำนวนเฉพาะ
                isPrime = 0;  //กำหนดว่าไม่ใช่จำนวนเฉพาะ
                break;  //ออกจากลูป
            }
        }
        if(isPrime)  //ถ้า i เป็นจำนวนเฉพาะ
            printf("%d ", i);  //แสดงตัวเลขเฉพาะนั้น
    }
    printf("\n");
    return 0;
}
