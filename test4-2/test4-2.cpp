#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* file;
    char ch;

    // ���ļ�����д��
    file = fopen("D:\\f1.txt", "w");
    if (file == NULL) {
        printf("�޷����ļ�����д�룡\n");
        return 1;
    }

    printf("�������ַ������롮#��������\n");

    // �����ַ���д���ļ���ֱ��������#��
    while ((ch = getchar()) != '#') {
        fputc(ch, file); // ���ַ�д���ļ�
    }

    fclose(file); // �ر��ļ�

    // ���ļ����ж�ȡ
    file = fopen("D:\\f1.txt", "r");
    if (file == NULL) {
        printf("�޷����ļ����ж�ȡ��\n");
        return 1;
    }

    printf("\n���ļ��ж�ȡ�������ǣ�\n");

    // ���ļ���ȡ����ʾ����
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); // �����ȡ�����ַ�
    }

    fclose(file); // �ر��ļ�

    return 0;
}
