#include <stdio.h>

// Ham tim max va min
void timMaxMin(int a[], int n, int *max, int *min) {

    int i;

    *max = a[0];
    *min = a[0];

    for(i = 1; i < n; i++) {

        if(a[i] > *max) {
            *max = a[i];
        }

        if(a[i] < *min) {
            *min = a[i];
        }
    }
}

int main() {

    int a[100];
    int n, i;
    int max, min;

    printf("Nhap n: ");
    scanf("%d", &n);

    // Nhap mang
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Goi ham
    timMaxMin(a, n, &max, &min);

    printf("Max = %d\n", max);
    printf("Min = %d", min);

    return 0;
}
