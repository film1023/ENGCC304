#include <stdio.h>
#include <string.h> // สำหรับใช้ฟังก์ชัน strcpy และ strlen

int main() {
    char employee_id[11]; // +1 สำหรับ null terminator (สูงสุด 10 ตัวอักษร)
    int working_hrs;
    float salary_per_hr;
    float total_salary;

    // Input Employee ID
    printf("Input the Employees ID (Max. 10 chars):\n");
    scanf("%10s", employee_id); // ใช้ %10s เพื่อจำกัดการรับข้อมูลไม่เกิน 10 ตัวอักษร

    // Input working hours
    printf("Input the working hrs:\n");
    scanf("%d", &working_hrs);

    // Input salary amount/hr
    printf("Salary amount/hr:\n");
    scanf("%f", &salary_per_hr);

    // Calculate total salary
    total_salary = working_hrs * salary_per_hr;

    // Output
    printf("รหัสพนักงาน และรายได้ทั้งหมดที่หนักงานจะได้รับ:\n");
    printf("Employees ID = %s\n", employee_id);
    printf("Salary = U$ %.2f\n", total_salary); // ใช้ %.2f เพื่อแสดงทศนิยม 2 ตำแหน่ง

    return 0;
}
