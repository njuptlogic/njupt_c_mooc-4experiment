#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ������������ֵ
void swap(double* x, double* y) {
    double temp = *x;
    *x = *y;
    *y = temp;
}

// ��a, b, c��������ʹ��a <= b <= c
void sort(double* a, double* b, double* c) {
    if (*a > *b) swap(a, b);
    if (*a > *c) swap(a, c);
    if (*b > *c) swap(b, c);
}

int main() {
    double a, b, c;

    // ����������
    printf("�����������ε�������: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // ��a, b, c����
    sort(&a, &b, &c);

    // �ж��Ƿ��ܹ���������
    if (a + b > c) {
        // �ܹ���������
        if (a == b && b == c) {
            printf("�ȱ�������\n");
        }
        else if (a == b || b == c) {
            printf("����������\n");
        }
        else if (a * a + b * b == c * c) {
            printf("ֱ��������\n");
        }
        else {
            printf("һ��������\n");
        }
    }
    else {
        // ���ܹ���������
        printf("���ܹ���������\n");
    }

    return 0;
}
