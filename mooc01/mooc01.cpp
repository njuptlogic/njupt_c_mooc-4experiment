#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double F, C;

    // ʹ��scanf��ȡ�û�����Ļ����¶ȣ���ʽΪ%lf
    scanf("%lf", &F);

    // ���������¶�
    C = 5 * (F - 32) / 9;

    // ��������¶ȣ���ʽΪ%lf
    printf("Celsius=%.6lf\n", C);

    return 0;
}