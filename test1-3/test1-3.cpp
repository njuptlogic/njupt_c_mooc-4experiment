#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<Windows.h>

int main() {
    int i, n;
    int sign = 1;
    double sum = 0.0;
    double numerator1 = 2.0, numerator2 = 3.0;  // ���ӵĳ�ʼֵ
    double denominator1 = 1.0, denominator2 = 2.0;  // ��ĸ�ĳ�ʼֵ

    // ����nֵ������Ҫ���������
    printf("����������n: ");
    scanf("%d", &n);

    // ����ǰn��ĺ�
    for (i = 1; i <= n; i++) {
        double term = 0.0;
        term = numerator1 / denominator1*sign;
        

        // �ۼӵ��ܺ���
        sum += term;

        // ���·��Ӻͷ�ĸ��ʹ��쳲������������ɷ��Ӻͷ�ĸ��
        double next_numerator = numerator1 + numerator2;
        numerator1 = numerator2;
        numerator2 = next_numerator;

        double next_denominator = denominator1 + denominator2;
        denominator1 = denominator2;
        denominator2 = next_denominator;

        sign = -sign;
    }

    // ������
    printf("ǰ%d��ĺ�Ϊ: %.6f\n", n, sum);
    system("pause");
    return 0;
}
