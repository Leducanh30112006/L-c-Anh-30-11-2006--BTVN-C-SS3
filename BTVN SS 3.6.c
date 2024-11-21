#include <stdio.h>

int main() {
    float canhDay, chieuCao, dienTich;
    printf("CD: ");
    scanf("%f", &canhDay);
    printf("CC: ");
    scanf("%f", &chieuCao);
    dienTich = 0.5 * canhDay * chieuCao;
    printf("Dien tich tam giac la : %.2f\n", dienTich);

    return 0;
}

