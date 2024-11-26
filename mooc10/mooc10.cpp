#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void rotate(int arr[], int n, int m) {
    int* temp = (int*)malloc(m * sizeof(int));  // ��̬�����ڴ�
    int i;

    // ��鶯̬�ڴ�����Ƿ�ɹ�
    if (temp == NULL) {
        printf("�ڴ����ʧ�ܣ�\n");
        return;
    }

    // �Ƚ����m��Ԫ�ش���temp����
    for (i = 0; i < m; i++) {
        temp[i] = arr[n - m + i];
    }

    // ��ǰn-m��Ԫ������ƶ�m��λ��
    for (i = n - 1; i >= m; i--) {
        arr[i] = arr[i - m];
    }

    // ��temp�е�m��Ԫ�طŵ������ǰ��
    for (i = 0; i < m; i++) {
        arr[i] = temp[i];
    }

    // �ͷŶ�̬������ڴ�
    free(temp);
}

int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10 };
    int m, i;
    scanf("%d", &m);

    // ��������Ƿ����
    if (m < 0 || m > 10) {
        printf("�ƶ����� m ������ 0 �� 10 ֮�䡣\n");
        return 1;
    }

    // ����rotate������������ת
    rotate(arr, 10, m);

    // �����ת�������
    for (i = 0; i < 10; i++) {
        printf("%3d", arr[i]);
    }
    printf("\n");

    return 0;
}

