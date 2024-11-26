#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[10];
    int i, max, min, sum = 0, count = 0;
    double average;

    // 输入10个整数
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // 初始化最大值和最小值为第一个元素
    max = min = arr[0];

    // 找到最大值和最小值
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // 计算去掉所有最大值和最小值后的总和和计数
    for (i = 0; i < 10; i++) {
        if (arr[i] != max && arr[i] != min) {
            sum += arr[i];
            count++;
        }
    }

    // 判断是否有有效的元素来计算平均值
    if (count > 0) {
        average = sum / (double)count;
        printf("%.6lf\n", average);
    }
    else {
        printf("去掉所有最大值和最小值后，没有足够的元素计算平均值。\n");
    }

    return 0;
}



