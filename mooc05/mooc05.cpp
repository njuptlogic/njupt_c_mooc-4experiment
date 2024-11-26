#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PI 3.14  // ����Բ����

// ����Բ׶��ı����
double surface_area(double r, double h) {
    double slant_height = sqrt(r * r + h * h);  // ����б��
    return PI * r * (r + slant_height);  // �������ʽ
}

// ����Բ׶������
double volume(double r, double h) {
    return (1.0 / 3) * PI * r * r * h;  // �����ʽ
}

int main() {
    double r, h;  // ����뾶�͸߶�
    // ����뾶�͸߶�
    printf("");
    scanf("%lf %lf", &r, &h);

    // �������������
    double area = surface_area(r, h);
    double vol = volume(r, h);

    // ������
    printf("radius=%.6lf, height=%.6lf, Area of surface=%.6lf, Volume=%.6lf\n", r, h, area, vol);

    return 0;
}
