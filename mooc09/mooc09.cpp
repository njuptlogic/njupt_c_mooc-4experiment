#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[10];
    int i, max, min, sum = 0, count = 0;
    double average;

    // ����10������
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // ��ʼ�����ֵ����СֵΪ��һ��Ԫ��
    max = min = arr[0];

    // �ҵ����ֵ����Сֵ
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // ����ȥ���������ֵ����Сֵ����ܺͺͼ���
    for (i = 0; i < 10; i++) {
        if (arr[i] != max && arr[i] != min) {
            sum += arr[i];
            count++;
        }
    }

    // �ж��Ƿ�����Ч��Ԫ��������ƽ��ֵ
    if (count > 0) {
        average = sum / (double)count;
        printf("%.6lf\n", average);
    }
    else {
        printf("ȥ���������ֵ����Сֵ��û���㹻��Ԫ�ؼ���ƽ��ֵ��\n");
    }

    return 0;
}



