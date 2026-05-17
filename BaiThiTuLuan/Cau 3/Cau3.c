#include <stdio.h>

int main() {

    char str[256];
    int i = 0;
    int chuCai = 0;
    int chuSo = 0;

    printf("Nhap chuoi: ");
    gets(str);

    while (str[i] != '\0') {

        // Dem chu cai
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {

            chuCai++;
        }

        // Dem chu so
        if (str[i] >= '0' && str[i] <= '9') {

            chuSo++;
        }

        i++;
    }

    printf("So chu cai: %d\n", chuCai);
    printf("So chu so: %d", chuSo);

    return 0;
}
