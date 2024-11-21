#include <stdio.h>

int main()
{
    int num;
    printf("Nhap so co 4 chu so: ");
    do
    {
        scanf("%d", &num);
        if (num < 1000 || num > 9999)
            printf("Khong hop le, nhap lai: ");
    } while (num < 1000 || num > 9999);

    int result = 0, tmp = num;
    while (num != 0)
    {
        result = result * 10 + num % 10;
        num /= 10;
    }
    printf("So nghich dao cua so %d la: %d", tmp, result);
}