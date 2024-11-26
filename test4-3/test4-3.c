#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义学生结构体
struct Student {
    char ID[20];
    char name[30];
    int age;
    double score;
};

// 函数声明
void CreateFile(struct Student students[], int n);
void ReadOut();
void Sort(struct Student students[], int n);

int main() {
    int n;
    struct Student students[40];

    printf("请输入班级学生人数（最多40名）：");
    scanf("%d", &n);
    if (n > 40 || n <= 0) {
        printf("学生人数无效，必须是1到40之间。\n");
        return 1;
    }

    // 从键盘输入学生信息
    for (int i = 0; i < n; i++) {
        printf("请输入第%d名学生的信息：\n", i + 1);
        printf("学号: ");
        getchar(); // 清空输入缓存，避免读取遗留换行符
        fgets(students[i].ID, sizeof(students[i].ID), stdin);
        students[i].ID[strcspn(students[i].ID, "\n")] = '\0'; // 去除换行符

        printf("姓名: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // 去除换行符

        printf("年龄: ");
        scanf("%d", &students[i].age);

        printf("成绩: ");
        scanf("%lf", &students[i].score);
    }

    // 将学生信息写入文件
    CreateFile(students, n);

    // 从文件读取并显示信息
    ReadOut();

    // 按成绩排序并显示
    Sort(students, n);
    printf("\n排序后的学生信息按成绩从高到低：\n");
    for (int i = 0; i < n; i++) {
        printf("学号: %s, 姓名: %s, 年龄: %d, 成绩: %.2f\n", students[i].ID, students[i].name, students[i].age, students[i].score);
    }

    return 0;
}

// 创建文件并写入学生信息
void CreateFile(struct Student students[], int n) {
    FILE* file = fopen("D:\\Info.dat", "wb");
    if (file == NULL) {
        printf("无法打开文件进行写入！\n");
        exit(1);
    }

    fwrite(students, sizeof(struct Student), n, file); // 二进制写入学生信息
    fclose(file);
}

// 从文件中读取学生信息并输出
void ReadOut() {
    FILE* file = fopen("D:\\Info.dat", "rb");
    if (file == NULL) {
        printf("无法打开文件进行读取！\n");
        exit(1);
    }

    struct Student student;
    printf("\n从文件中读取的学生信息：\n");
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("学号: %s, 姓名: %s, 年龄: %d, 成绩: %.2f\n", student.ID, student.name, student.age, student.score);
    }

    fclose(file);
}

// 按成绩从高到低排序学生信息
void Sort(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].score < students[j].score) {
                // 交换学生信息
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}
