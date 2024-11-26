#include<stdio.h>
int a = 1;
int f(int a)
{
    auto int b = 2;
    static int c = 3;
    a = a + 1;
    b = b + 1;
    c = c + 1;
    return (a + b + c);
}

int main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        a = a + 2;
        printf("%d \n", f(a));
    }
    return 0;
}