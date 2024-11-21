#include <stdio.h>

int main()
{
    int num;
    do
    {
        printf("Nhap mot so co bon chu so: ");
        scanf("%d", &num);
        if (num < 1000 || num > 9999)
            printf("So nhap vao khong hop le. Nhap lai.");
    } while (num < 1000 || num > 9999);
    
    int sum = 0;
    do
    {
        sum += num % 10;
    } while ((num /= 10) != 0);
    printf("Tong chu so: %d", sum);
}