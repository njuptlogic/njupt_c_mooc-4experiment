#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void filterDigits(char* input, char* output) {
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (isdigit(input[i])) {  // ����Ƿ�Ϊ�����ַ�
            output[j++] = input[i];
        }
    }
    output[j] = '\0';  // �ڽ�β����ַ�����ֹ��
}

int main() {
    char input[100], output[100];

    // �����ַ���
    scanf("%s", input);

    // ���˵��������ַ�
    filterDigits(input, output);

    // ������
    printf("%s\n", output);

    return 0;
}
