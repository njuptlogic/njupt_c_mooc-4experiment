#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 输入数组元素
void inputArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

// 输出数组元素
void outputArray(const int array[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// 计算数组平均值
double averageArray(const int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return (double)sum / size;
}

// 查找数组最大值
int maxArray(const int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

// 查找数组最小值
int minArray(const int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

// 查找某元素是否存在，返回下标
int findElement(const int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
}

// 对数组进行排序（升序）
void sortArray(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main() {
    int array[10];
    int size = 10;

    // 输入数组元素
    inputArray(array, size);

    // 输出数组元素
    outputArray(array, size);

    // 求数组平均值
    printf("Average value: %.2f\n", averageArray(array, size));

    // 输出最大值
    printf("Maximum value: %d\n", maxArray(array, size));

    // 输出最小值
    printf("Minimum value: %d\n", minArray(array, size));

    // 查找某元素
    int search;
    printf("Enter a value to search: ");
    scanf("%d", &search);
    int index = findElement(array, size, search);
    if (index != -1) {
        printf("Element %d found at index %d.\n", search, index);
    }
    else {
        printf("Element %d not found.\n", search);
    }

    // 对数组进行排序
    sortArray(array, size);
    printf("Sorted array: ");
    outputArray(array, size);

    return 0;
}
