#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_STUDENTS 10

struct Student {
    int id;
    char name[50];
    int math;
    int physics;
    int english;
    int average;
};

int main() {
    int n; // 学生人数
    scanf("%d", &n);

    if (n > MAX_STUDENTS) {
        printf("Number of students exceeds the limit of %d.\n", MAX_STUDENTS);
        return 1;
    }

    struct Student students[MAX_STUDENTS];

    // 输入每个学生的信息
    for (int i = 0; i < n; i++) {
        scanf("%d %s %d %d %d", &students[i].id, students[i].name, &students[i].math, &students[i].physics, &students[i].english);

        // 计算平均分
        students[i].average = (students[i].math + students[i].physics + students[i].english) / 3;
    }

    // 输出每个学生的平均分
    for (int i = 0; i < n; i++) {
        printf("The average score of the %dth student is %d.\n", i + 1, students[i].average);
    }

    return 0;
}
