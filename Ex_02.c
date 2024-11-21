#include <stdio.h>

int main()
{
    float Celsius;
    printf("Nhap nhiet do nhap nhiet do(C)");
    scanf("%f", &Celsius);
    float Fahrenheit = Celsius * 1.8 + 32;
    printf("%.2f do C = %.2f do F", Celsius, Fahrenheit);
}