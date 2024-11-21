#include <stdio.h>

int main()
{
    float base, height, area;
    printf("Nhap do dai canh day va chieu cao cua tam giac: ");
    scanf("%f%f", &base, &height);

    area = 0.5 * base * height;
    printf("%.2f", area);
}