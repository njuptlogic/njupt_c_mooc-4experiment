#include <stdio.h>
#include <math.h>

// �ж��Ƿ�Ϊ�����ĺ���
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;  // ����ܱ� i ��������������
        }
    }
    return 1;  // ������
}

int main() {
    int count = 0;  // ���ڿ���ÿ�����8������

    // ���� 100 �� 999 ֮�������
    for (int i = 100; i <= 999; i++) {
        if (isPrime(i)) {  // ���������
            printf("%4d", i);  // ���� 4 �����
            count++;  // ͳ���������������

            // ÿ8��������һ��
            if (count % 8 == 0) {
                printf("\n");
            }
        }
    }

    // ������һ��δ��8������������
    if (count % 8 != 0) {
        printf("\n");
    }

    return 0;
}
