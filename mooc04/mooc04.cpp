#include <stdio.h>

int main() {
    int i, j, k;

    // ���д�ӡ���õĵ��������Σ�7��
    for (i = 0; i <=4 ; i++) {
        for (k = 1; k <= i ; k++) {
            printf(" ");
        }
        // ÿ�д�ӡi���Ǻ�
        for (j = 1; j <= 9-i*2; j++) {
            printf("*");
        }
        // ÿ�д�ӡ���Ǻź���
        printf("\n");
        
    }

    return 0;
}
