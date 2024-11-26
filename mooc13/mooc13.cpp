#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void toHex(long num) {
    char hexDigits[] = "0123456789ABCDEF";  // 定义十六进制字符
    char hex[20];                           // 用于存储十六进制表示的字符串
    int i = 0;

    // 处理特殊情况
    if (num == 0) {
        printf("0\n");
        return;
    }

    // 将十进制数转换为十六进制
    while (num > 0) {
        int remainder = num % 16;          // 取余数
        hex[i++] = hexDigits[remainder];   // 对应的十六进制字符存入数组
        num /= 16;
    }

    // 逆序输出结果
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    long num;

    // 输入一个长整型数
    scanf("%ld", &num);

    // 调用函数进行转换并输出
    toHex(num);

    return 0;
}
