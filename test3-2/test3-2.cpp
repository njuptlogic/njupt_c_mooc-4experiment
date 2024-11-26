#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char str[100]; // 定义一个字符数组存储输入的字符串
    char* p = str; // 定义一个指针，初始指向字符数组
    char* q = str; // 定义另一个指针，用于重新构建字符串

    // 从键盘读取字符串
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // 遍历字符串
    while (*p != '\0') { // 当指针未到字符串末尾时
        if (*p != ' ') { // 如果当前字符不是空格
            *q = *p;     // 将当前字符拷贝到新位置
            q++;         // 移动构建字符串的指针
        }
        p++;             // 移动读取字符串的指针
    }
    *q = '\0';           // 在末尾添加字符串终止符

    // 输出处理后的字符串
    printf("String without spaces: %s\n", str);

    return 0;
}
