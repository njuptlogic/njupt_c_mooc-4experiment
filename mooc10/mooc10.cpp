#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void rotate(int arr[], int n, int m) {
    int* temp = (int*)malloc(m * sizeof(int));  // 动态分配内存
    int i;

    // 检查动态内存分配是否成功
    if (temp == NULL) {
        printf("内存分配失败！\n");
        return;
    }

    // 先将最后m个元素存入temp数组
    for (i = 0; i < m; i++) {
        temp[i] = arr[n - m + i];
    }

    // 将前n-m个元素向后移动m个位置
    for (i = n - 1; i >= m; i--) {
        arr[i] = arr[i - m];
    }

    // 将temp中的m个元素放到数组的前面
    for (i = 0; i < m; i++) {
        arr[i] = temp[i];
    }

    // 释放动态分配的内存
    free(temp);
}

int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10 };
    int m, i;
    scanf("%d", &m);

    // 检查输入是否合理
    if (m < 0 || m > 10) {
        printf("移动次数 m 必须在 0 到 10 之间。\n");
        return 1;
    }

    // 调用rotate函数将数组旋转
    rotate(arr, 10, m);

    // 输出旋转后的数组
    for (i = 0; i < 10; i++) {
        printf("%3d", arr[i]);
    }
    printf("\n");

    return 0;
}

