#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
// 函数原型
void DrawTriangle(int n, char c);

int main() {
    // 打印 5 行的 '*' 组成的等腰三角形
    DrawTriangle(5, '*');
    printf("\n"); // 分隔两个三角形

    // 打印 10 行的 '#' 组成的等腰三角形
    DrawTriangle(10, '#');

    return 0;
}

// 函数实现
void DrawTriangle(int n, char c) {
    for (int i = 1; i <= n; i++) { // 外层控制行数
        // 打印空格
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // 打印字符
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%c", c);
        }
        printf("\n"); // 换行
    }
}



#include <stdio.h>

void DrawTriangleToFile(int n, char c, const char* filename);

int main() {
    // 将结果输出到文件 triangle.txt 中
    DrawTriangleToFile(50, '*', "triangle.txt");
    printf("Triangle saved to 'triangle.txt'.\n");
    return 0;
}

// 输出等腰三角形到文件
void DrawTriangleToFile(int n, char c, const char* filename) {
    FILE* file = fopen(filename, "w");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            fputc(' ', file);
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            fputc(c, file);
        }
        fputc('\n', file);
    }
    fclose(file);
}







*/
#include <stdio.h>
#include <stdlib.h>

void DrawTrianglePaged(int n, char c);

int main() {
    DrawTrianglePaged(50, '*');
    return 0;
}

// 分页显示等腰三角形
void DrawTrianglePaged(int n, char c) {
    int lines_per_page = 20; // 每页显示的行数
    int line_count = 0;      // 当前已显示行数

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%c", c);
        }
        printf("\n");
        line_count++;

        // 到达分页限制时暂停
        if (line_count == lines_per_page) {
            printf("Press Enter to continue...");
            getchar(); // 等待用户按下回车
            line_count = 0; // 重置行计数
        }
    }
}
