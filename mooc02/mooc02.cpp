#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// ����׳˵ĺ���
double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    double m;
    double term, sum = 0;
    int i = 1;

    // ���� m ��ֵ
    printf("");
    scanf("%lf", &m);

    // ��ʼ����һ����
    term = m;

    // ѭ���ۼ�ÿһ�ֱ�����һ��ľ���ֵС�� 1e-4
    while (fabs(term) >= 1e-4) {
        sum += term;
        i++;
        // ������һ�������Ϊ����ż����Ϊ��
        term = pow(m, i) / factorial(i);
        if (i % 2 == 0) {
            term = -term;
        }
    }

    // ��������������λС��
    printf("%.2f\n", sum);

    return 0;
}






















