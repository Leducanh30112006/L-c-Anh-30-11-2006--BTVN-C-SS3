#include <stdio.h>

int main() {
    float r, chuVi, dienTich;
    const float PI = 3.14;
    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &r);
    chuVi = 2 * PI * r;
    dienTich = PI * r * r;
    printf("Chu vi h�nh tr�n: %.2f\n", chuVi);
    printf("Di?n t�ch h�nh tr�n: %.2f\n", dienTich);
    return 0;
}

