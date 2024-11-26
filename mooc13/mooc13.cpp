#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void toHex(long num) {
    char hexDigits[] = "0123456789ABCDEF";  // ����ʮ�������ַ�
    char hex[20];                           // ���ڴ洢ʮ�����Ʊ�ʾ���ַ���
    int i = 0;

    // �����������
    if (num == 0) {
        printf("0\n");
        return;
    }

    // ��ʮ������ת��Ϊʮ������
    while (num > 0) {
        int remainder = num % 16;          // ȡ����
        hex[i++] = hexDigits[remainder];   // ��Ӧ��ʮ�������ַ���������
        num /= 16;
    }

    // ����������
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    long num;

    // ����һ����������
    scanf("%ld", &num);

    // ���ú�������ת�������
    toHex(num);

    return 0;
}
