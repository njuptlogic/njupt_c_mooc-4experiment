#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char str[100]; // ����һ���ַ�����洢������ַ���
    char* p = str; // ����һ��ָ�룬��ʼָ���ַ�����
    char* q = str; // ������һ��ָ�룬�������¹����ַ���

    // �Ӽ��̶�ȡ�ַ���
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // �����ַ���
    while (*p != '\0') { // ��ָ��δ���ַ���ĩβʱ
        if (*p != ' ') { // �����ǰ�ַ����ǿո�
            *q = *p;     // ����ǰ�ַ���������λ��
            q++;         // �ƶ������ַ�����ָ��
        }
        p++;             // �ƶ���ȡ�ַ�����ָ��
    }
    *q = '\0';           // ��ĩβ����ַ�����ֹ��

    // ����������ַ���
    printf("String without spaces: %s\n", str);

    return 0;
}
