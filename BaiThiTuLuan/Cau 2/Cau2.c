#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int sum = 0, count = 0;

    do {
        printf("Nhap n (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nCac so chan trong mang: ");

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }

    for (i = 0; i < n; i++) {
        if (a[i] > 0) {
            sum += a[i];
            count++;
        }
    }

    if (count > 0) {
        printf("\nTrung binh cong so duong: %.2f", (float)sum / count);
    }
    else {
        printf("\nKhong co so duong trong mang");
    }

    return 0;
}
