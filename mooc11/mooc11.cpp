#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sort(int* a, int n) {
    int i, j, temp;

    // ��������ʵ��
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) { // ��ǰһ��Ԫ�ش��ں�һ��Ԫ�أ��򽻻�
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    int a[10];

    // ����n��ֵ
    scanf("%d", &n);

    // ����n������
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // ����sort������������
    sort(a, n);

    // �������������
    for (i = 0; i < n; i++) {
        printf("%d  ", a[i]);
    }
    printf("\n");

    return 0;
}
