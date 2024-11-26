#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

// �ж�һ�����Ƿ�������
bool isPrime(int n) {
    if (n <= 1) return false; // 1 ���С������������
    for (int i = 2; i * i <= n; i++) { // ���� 2 �� sqrt(n) ��������
        if (n % i == 0) return false; // ��� n �ܱ���������������
    }
    return true;
}

// ��֤ 2000 ����ż���Ƿ������°ͺղ���
void verifyGoldbach() {
    for (int even = 4; even <= 2000; even += 2) { // ���� 2000 ���ڵ�ż��
        for (int p = 2; p <= even / 2; p++) { // ����С�ڵ���ż����һ�����
            if (isPrime(p) && isPrime(even - p)) { // �ж��������Ƿ�������
                printf("%d = %d + %d\n", even, p, even - p);
                break; // �ҵ�һ�ַֽ��ֹͣ���
            }
        }
    }
}

int main() {
    printf("��֤ 2000 ���ڵ�ż���Ƿ������°ͺղ��룺\n");
    verifyGoldbach();
    return 0;
}
