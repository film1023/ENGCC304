#include <stdio.h>
#include <string.h> // สำหรับฟังก์ชัน strlen()
#include <stdlib.h> // สำหรับฟังก์ชัน strtol()

// ฟังก์ชันสำหรับตรวจสอบว่าเป็นตัวเลขทั้งหมดหรือไม่
int isNumber(const char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9') {
            return 0; // ไม่ใช่ตัวเลข
        }
    }
    return 1; // เป็นตัวเลขทั้งหมด
}

int main() {
    int score;
    char input_buffer[100]; // บัฟเฟอร์สำหรับรับ input เป็นสตริง

    while (1) { // ลูปสำหรับรับ input ซ้ำจนกว่าจะถูกต้อง
        printf("enter score : ");
        if (fgets(input_buffer, sizeof(input_buffer), stdin) == NULL) {
            // เกิดข้อผิดพลาดในการอ่าน input
            printf("Error reading input.\n");
            return 1; // ออกจากโปรแกรมพร้อมรหัสข้อผิดพลาด
        }

        // ลบ newline character ที่อาจติดมากับ fgets
        input_buffer[strcspn(input_buffer, "\n")] = 0;

        if (!isNumber(input_buffer)) {
            printf("please enter number only.\n");
            continue; // กลับไปต้นลูปเพื่อรับ input ใหม่
        }

        // แปลงสตริงเป็น int โดยใช้ strtol เพื่อความปลอดภัย
        char *endptr;
        long val = strtol(input_buffer, &endptr, 10);

        // ตรวจสอบว่ามีอักขระที่ไม่ใช่ตัวเลขเหลืออยู่หรือไม่ (หลังจากแปลงแล้ว)
        if (*endptr != '\0') {
             printf("please enter number only.\n");
             continue;
        }

        score = (int)val; // แปลง long เป็น int

        if (score < 0 || score > 100) {
            printf("Please enter a score between 0 and 100.\n");
        } else if (score < 50) {
            printf("F !\n");
            break;
        } else if (score >= 50 && score < 55) {
            printf("D !\n");
            break;
        } else if (score >= 55 && score < 60) {
            printf("D+ !\n");
            break;
        } else if (score >= 60 && score < 65) {
            printf("C !\n");
            break;
        } else if (score >= 65 && score < 70) {
            printf("C+ !\n");
            break;
        } else if (score >= 70 && score < 75) {
            printf("B !\n");
            break;
        } else if (score >= 75 && score < 80) {
            printf("B+ !\n");
            break;
        } else { // score >= 80
            printf("A !\n");
            break;
        }
    }

    return 0; // ออกจากโปรแกรม
}
