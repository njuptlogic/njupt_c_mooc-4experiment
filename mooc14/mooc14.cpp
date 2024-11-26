#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void filterDigits(char* input, char* output) {
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (isdigit(input[i])) {  // 检查是否为数字字符
            output[j++] = input[i];
        }
    }
    output[j] = '\0';  // 在结尾添加字符串终止符
}

int main() {
    char input[100], output[100];

    // 输入字符串
    scanf("%s", input);

    // 过滤掉非数字字符
    filterDigits(input, output);

    // 输出结果
    printf("%s\n", output);

    return 0;
}
