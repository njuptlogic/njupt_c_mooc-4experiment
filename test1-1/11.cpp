#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<windows.h>
int main() {
    int a, b;
    int sum, difference, product;
    float quotient, ave;

    // ������������
    printf("��������������a��b: ");
    scanf("%d %d", &a, &b);

    // ����͡�������̡�ƽ��ֵ
    sum = a + b;
    difference = a - b;
    product = a * b;

    // �жϳ����Ƿ�Ϊ�㣬����������
    if (b != 0) {
        quotient = (float)a / b;  // ��aת��Ϊ���������Եõ�������
    }
    else {
        printf("b����Ϊ0���޷������̡�\n");
        quotient = 0.0;  // ����δ��ʼ����quotient
    }

    ave = (float)(a + b) / 2;  // ����ƽ��ֵ

    // ������
    printf("sum = %d\n", sum);
    printf("difference = %d\n", difference);
    printf("product = %d\n", product);
    if (b != 0) {
        printf("quotient = %.2f\n", quotient);  // ������λС�������
    }
    printf("average = %.2f\n", ave);  // ������λС�����ƽ��ֵ
    system("pause");
    return 0;
}
