#include <stdio.h>

int main()
{
    float scoreMath, scoreLiterature, scoreEnglish;
    printf("Nhap diem toan, van va anh: ");
    scanf("%f%f%f", &scoreMath, &scoreLiterature, &scoreEnglish);
    float sum = scoreMath + scoreLiterature + scoreEnglish, average = sum / 3;
    printf("Tong diem va diem trung binh la: %.2f, %.2f", sum, average);
}