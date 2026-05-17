#include <stdio.h>
#include <math.h>

int main() {
    float a;
    double total = 0;

    printf("Nhap so km di chuyen: ");
    scanf("%f", &a);

    if (a <= 1) {
        total = a * 15000;
    }
    else if (a <= 10) {
        total = 15000 + (a - 1) * 13500;
    }
    else {
        total = 15000 + 9 * 13500 + (a - 10) * 11000;
    }

    if (a > 20) {
        total = total * 0.9;
    }

    printf("Tong tien taxi: %.0f VND", total);

    return 0;
}
