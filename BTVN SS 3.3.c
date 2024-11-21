#include <stdio.h>

int main() {
    float r, chuVi, dienTich;
    const float PI = 3.14;
    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &r);
    chuVi = 2 * PI * r;
    dienTich = PI * r * r;
    printf("Chu vi hình tròn: %.2f\n", chuVi);
    printf("Di?n tích hình tròn: %.2f\n", dienTich);
    return 0;
}

