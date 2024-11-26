#include <stdio.h>
#include <math.h>

// 判断是否是质数的函数
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

    // 从4开始遍历到2000的所有偶数
    for (even = 4; even <= 2000; even += 2) {
        for (prime1 = 2; prime1 <= even / 2; prime1++) {
            prime2 = even - prime1;
            if (isPrime(prime1) && isPrime(prime2)) {
                // 找到一对质数的和等于当前偶数
                printf("%4d=%4d+%4d", even, prime1, prime2);
                count++;
                // 每行输出四个分解结果
                if (count % 4 == 0) {
                    printf("\n");
                }
                else {
                    printf(" ");
                }
                break;  // 找到一种分解方式后跳出内循环
            }
        }
    }

    return 0;
}
