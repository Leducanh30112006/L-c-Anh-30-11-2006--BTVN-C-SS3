#include <stdio.h>

int main(){
    int num, sum;
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &num);
    int nghin = num / 1000;
    int tram = (num % 1000) / 100;
    int chuc = (num % 100) / 10;
    int donvi = num % 10;
    sum = nghin + tram + chuc + donvi;
    printf("Tong cac so la : %d\n", sum);
    return 0;
}

