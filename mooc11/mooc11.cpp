#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sort(int* a, int n) {
    int i, j, temp;

    // 交换排序实现
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) { // 若前一个元素大于后一个元素，则交换
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    int a[10];

    // 输入n的值
    scanf("%d", &n);

    // 输入n个整数
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // 调用sort函数进行排序
    sort(a, n);

    // 输出排序后的数组
    for (i = 0; i < n; i++) {
        printf("%d  ", a[i]);
    }
    printf("\n");

    return 0;
}
