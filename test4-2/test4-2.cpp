#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* file;
    char ch;

    // 打开文件进行写入
    file = fopen("D:\\f1.txt", "w");
    if (file == NULL) {
        printf("无法打开文件进行写入！\n");
        return 1;
    }

    printf("请输入字符，输入‘#’结束：\n");

    // 读入字符并写入文件，直到遇到‘#’
    while ((ch = getchar()) != '#') {
        fputc(ch, file); // 将字符写入文件
    }

    fclose(file); // 关闭文件

    // 打开文件进行读取
    file = fopen("D:\\f1.txt", "r");
    if (file == NULL) {
        printf("无法打开文件进行读取！\n");
        return 1;
    }

    printf("\n从文件中读取的内容是：\n");

    // 从文件读取并显示内容
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); // 输出读取到的字符
    }

    fclose(file); // 关闭文件

    return 0;
}
