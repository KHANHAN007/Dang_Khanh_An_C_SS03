#include <stdio.h>
const float pi = 3.14;

int main()
{
    float r;
    printf("Nhap ban kinh cua hinh tron: ");
    scanf("%f", &r);

    float perimeter = 2 * pi * r, area = pi * r * r;
    printf("Hinh tron co chu vi va dien tich la: %.2f, %.2f", perimeter, area);
}