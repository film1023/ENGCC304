#include <stdio.h>
#include <string.h>

struct Student {
    char Name[50];
    char ID[10];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
};
typedef struct Student S;
//typedef struct Student { ... } S; ใช้แบบนี้สั้นกว่าเยอะแต่กลัวจารไม่เอา

// ฟังก์ชันตัดเกรด
const char* grade(float score) {
    if (score >= 80) return "A";
    else if (score >= 75) return "B+";
    else if (score >= 70) return "B";
    else if (score >= 65) return "C+";
    else if (score >= 60) return "C";
    else if (score >= 55) return "D+";
    else if (score >= 50) return "D";
    else return "F";
}

int main() {
    int i , n = 3;
    S students[n];
    
    printf("กรอกรายละเอียดนักเรียน %d คน :\n",n);
    for (i = 0; i < n; i++) {
        printf("\nนักเรียนคนที่     : %d\n", i + 1);
        printf("ชื่อ              : ");
        getchar(); // เคลียร์ buffer
        fgets(students[i].Name, sizeof(students[i].Name), stdin);
        students[i].Name[strcspn(students[i].Name, "\n")] = 0; // ลบ newline

        printf("รหัส นศ.         : ");
        fgets(students[i].ID, sizeof(students[i].ID), stdin);
        students[i].ID[strcspn(students[i].ID, "\n")] = 0;

        printf("คะแนนในวิชาที่ 1   : ");
        scanf("%f", &students[i].ScoreSub1);
        printf("คะแนนในวิชาที่ 2   : ");
        scanf("%f", &students[i].ScoreSub2);
        printf("คะแนนในวิชาที่ 3   : ");
        scanf("%f", &students[i].ScoreSub3);
        printf("คะแนนในวิชาที่ 4   : ");
        scanf("%f", &students[i].ScoreSub4);
        printf("คะแนนในวิชาที่ 5   : ");
        scanf("%f", &students[i].ScoreSub5);
    }

    printf("\nแสดงผลและวิเคราะห์ข้อมูลนักเรียน\n");
    // แสดงผล
    for (i = 0; i < n; i++) {
        float avg = (students[i].ScoreSub1 + students[i].ScoreSub2 +
                     students[i].ScoreSub3 + students[i].ScoreSub4 +
                     students[i].ScoreSub5) / 5.0;

 
        printf("\nนักเรียนคนที่       : %d\n", i + 1);
        printf("ชื่อ              : %s\n", students[i].Name);
        printf("รหัส นศ.         : %s\n", students[i].ID);
        printf("คะแนน           : %4.0f %4.0f %4.0f %4.0f %4.0f\n",
               students[i].ScoreSub1, students[i].ScoreSub2,
               students[i].ScoreSub3, students[i].ScoreSub4,
               students[i].ScoreSub5);
        printf("เกรดที่ได้         : %4s %4s %4s %4s %4s\n",
               grade(students[i].ScoreSub1),
               grade(students[i].ScoreSub2),
               grade(students[i].ScoreSub3),
               grade(students[i].ScoreSub4),
               grade(students[i].ScoreSub5));
        printf("คะแนนเฉลี่ย       : %3.1f\n", avg);
    }

    return 0;
}
