#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void SumDiff(int a, int b, int* sum, int* diff) {
    *sum = a + b;       // ����ͣ���ͨ��ָ�뷵��
    *diff = a - b;      // ������ͨ��ָ�뷵��
}

int main() {
    int a, b, sum, dif;

    // ������������
    scanf("%d%d", &a, &b);

    // ����SumDiff����
    SumDiff(a, b, &sum, &dif);

    // ��������
    printf("sum=%d, difference=%d\n", sum, dif);

    return 0;
}
