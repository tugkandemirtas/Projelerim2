#include <stdio.h>

int main(void)
{
    int decimal;
    int i = 0;
    int j;
    int binary[32];

    printf("Sayi giriniz: ");
    if (scanf("%d", &decimal) != 1) {
        printf("Gecersiz giris!\n");
        return 1;
    }

    if (decimal == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Negatif sayi istersen bunu da destekleyelim:
    if (decimal < 0) {
        printf("Negatif sayilar bu versiyonda desteklenmiyor.\n");
        return 1;
    }

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binary: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}















