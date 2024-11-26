#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

// 判断一个数是否是质数
bool isPrime(int n) {
    if (n <= 1) return false; // 1 或更小的数不是质数
    for (int i = 2; i * i <= n; i++) { // 检查从 2 到 sqrt(n) 的所有数
        if (n % i == 0) return false; // 如果 n 能被整除，则不是质数
    }
    return true;
}

// 验证 2000 以内偶数是否满足歌德巴赫猜想
void verifyGoldbach() {
    for (int even = 4; even <= 2000; even += 2) { // 遍历 2000 以内的偶数
        for (int p = 2; p <= even / 2; p++) { // 遍历小于等于偶数的一半的数
            if (isPrime(p) && isPrime(even - p)) { // 判断两个数是否都是质数
                printf("%d = %d + %d\n", even, p, even - p);
                break; // 找到一种分解后停止检查
            }
        }
    }
}

int main() {
    printf("验证 2000 以内的偶数是否满足歌德巴赫猜想：\n");
    verifyGoldbach();
    return 0;
}
