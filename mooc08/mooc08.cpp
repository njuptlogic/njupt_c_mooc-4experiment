#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fun(int a, int b, int r[]);

int main() {
    int a, b;
    int r[1000]; // ���ڴ洢������������
    int i = 0;
    scanf("%d %d", &a, &b);

    // ���ú��� fun ��������
    fun(a, b, r);

    // ������
    while (r[i] != 0) { // ������ 0 ��ʾ����
        printf("%d", r[i]);
        i++;
        if (r[i] != 0) {
            printf(" "); // ÿ��Ԫ�غ�ӿո����һ��Ԫ�غ��޿ո�
        }
    }
    printf("\n");

    return 0;
}

// ���庯�� fun������������������������
void fun(int a, int b, int r[]) {
    int i, j = 0;

    for (i = a; i <= b; i++) {
        // �ж��Ƿ������ܱ� 7 �� 11 ������������ͬʱ�� 7 �� 11 ����
        if ((i % 7 == 0 || i % 11 == 0) && !(i % 7 == 0 && i % 11 == 0)) {
            r[j++] = i; // ����������������������
        }
    }
    r[j] = 0; // �� 0 ��ʾ�������
}
