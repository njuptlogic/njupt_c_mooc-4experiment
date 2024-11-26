#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include<Windows.h>

// �ж��Ƿ�Ϊ�����ĺ���
int isPrime(int x) {
    if (x < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return 0;  // ��������
        }
    }
    return 1;  // ������
}

int main() {
    int a, b;
    int count = 0;

    // ѭ�����룬ֱ��a, b����Ҫ��
    do {
        printf("�����뷶Χa��b (10 <= a <= b <= 1000): ");
        scanf("%d %d", &a, &b);

        if (a < 10 || b > 1000 || a > b) {
            printf("������Ч�����������롣\n");
        }
    } while (a < 10 || b > 1000 || a > b);

    // �ڷ�Χ[a, b]���ҳ�������������ÿ�����5��
    printf("��Χ [%d, %d] �ڵ�����Ϊ:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%4d", i);
            count++;
            // ÿ�����5��
            if (count % 5 == 0) {
                printf("\n");
            }
        }
    }

    // ������һ�в���5������������
    if (count % 5 != 0) {
        printf("\n");
    }
    system("pause");
    return 0;
}
