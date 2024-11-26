#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��������Ԫ��
void inputArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

// �������Ԫ��
void outputArray(const int array[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// ��������ƽ��ֵ
double averageArray(const int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return (double)sum / size;
}

// �����������ֵ
int maxArray(const int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

// ����������Сֵ
int minArray(const int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

// ����ĳԪ���Ƿ���ڣ������±�
int findElement(const int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
}

// �����������������
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

    // ��������Ԫ��
    inputArray(array, size);

    // �������Ԫ��
    outputArray(array, size);

    // ������ƽ��ֵ
    printf("Average value: %.2f\n", averageArray(array, size));

    // ������ֵ
    printf("Maximum value: %d\n", maxArray(array, size));

    // �����Сֵ
    printf("Minimum value: %d\n", minArray(array, size));

    // ����ĳԪ��
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

    // �������������
    sortArray(array, size);
    printf("Sorted array: ");
    outputArray(array, size);

    return 0;
}
