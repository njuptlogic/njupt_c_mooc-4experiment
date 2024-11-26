#include <stdio.h>
#include <math.h>

// �ж��Ƿ��������ĺ���
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int even, prime1, prime2;
    int count = 0;

    // ��4��ʼ������2000������ż��
    for (even = 4; even <= 2000; even += 2) {
        for (prime1 = 2; prime1 <= even / 2; prime1++) {
            prime2 = even - prime1;
            if (isPrime(prime1) && isPrime(prime2)) {
                // �ҵ�һ�������ĺ͵��ڵ�ǰż��
                printf("%4d=%4d+%4d", even, prime1, prime2);
                count++;
                // ÿ������ĸ��ֽ���
                if (count % 4 == 0) {
                    printf("\n");
                }
                else {
                    printf(" ");
                }
                break;  // �ҵ�һ�ַֽⷽʽ��������ѭ��
            }
        }
    }

    return 0;
}
