#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
// ����ԭ��
void DrawTriangle(int n, char c);

int main() {
    // ��ӡ 5 �е� '*' ��ɵĵ���������
    DrawTriangle(5, '*');
    printf("\n"); // �ָ�����������

    // ��ӡ 10 �е� '#' ��ɵĵ���������
    DrawTriangle(10, '#');

    return 0;
}

// ����ʵ��
void DrawTriangle(int n, char c) {
    for (int i = 1; i <= n; i++) { // ����������
        // ��ӡ�ո�
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // ��ӡ�ַ�
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%c", c);
        }
        printf("\n"); // ����
    }
}



#include <stdio.h>

void DrawTriangleToFile(int n, char c, const char* filename);

int main() {
    // �����������ļ� triangle.txt ��
    DrawTriangleToFile(50, '*', "triangle.txt");
    printf("Triangle saved to 'triangle.txt'.\n");
    return 0;
}

// ������������ε��ļ�
void DrawTriangleToFile(int n, char c, const char* filename) {
    FILE* file = fopen(filename, "w");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            fputc(' ', file);
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            fputc(c, file);
        }
        fputc('\n', file);
    }
    fclose(file);
}







*/
#include <stdio.h>
#include <stdlib.h>

void DrawTrianglePaged(int n, char c);

int main() {
    DrawTrianglePaged(50, '*');
    return 0;
}

// ��ҳ��ʾ����������
void DrawTrianglePaged(int n, char c) {
    int lines_per_page = 20; // ÿҳ��ʾ������
    int line_count = 0;      // ��ǰ����ʾ����

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%c", c);
        }
        printf("\n");
        line_count++;

        // �����ҳ����ʱ��ͣ
        if (line_count == lines_per_page) {
            printf("Press Enter to continue...");
            getchar(); // �ȴ��û����»س�
            line_count = 0; // �����м���
        }
    }
}
