#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PI 3.14  // 定义圆周率

// 计算圆锥体的表面积
double surface_area(double r, double h) {
    double slant_height = sqrt(r * r + h * h);  // 计算斜高
    return PI * r * (r + slant_height);  // 表面积公式
}

// 计算圆锥体的体积
double volume(double r, double h) {
    return (1.0 / 3) * PI * r * r * h;  // 体积公式
}

int main() {
    double r, h;  // 定义半径和高度
    // 输入半径和高度
    printf("");
    scanf("%lf %lf", &r, &h);

    // 计算表面积和体积
    double area = surface_area(r, h);
    double vol = volume(r, h);

    // 输出结果
    printf("radius=%.6lf, height=%.6lf, Area of surface=%.6lf, Volume=%.6lf\n", r, h, area, vol);

    return 0;
}
