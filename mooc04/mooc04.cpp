#include <stdio.h>

int main() {
    int i, j, k;

    // 逐行打印倒置的等腰三角形，7行
    for (i = 0; i <=4 ; i++) {
        for (k = 1; k <= i ; k++) {
            printf(" ");
        }
        // 每行打印i个星号
        for (j = 1; j <= 9-i*2; j++) {
            printf("*");
        }
        // 每行打印完星号后换行
        printf("\n");
        
    }

    return 0;
}
