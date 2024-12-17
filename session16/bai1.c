#include <stdio.h>

int main() {
    int x = 10;         // Khai báo bi?n x
    int *ptr = &x;      // Khai báo con tr? tr? d?n d?a ch? c?a x

    printf("Cach 1: Su dung bien truc tiep va toan tu &\n");
    printf("Gia tri cua x: %d\n", x);
    printf("Dia chi cua x: %p\n", (void*)&x);

    printf("\nCach 2: Su dung con tro\n");
    printf("Gia tri cua x (thong qua con tro): %d\n", *ptr);
    printf("Dia chi cua x (thong qua con tro): %p\n", (void*)ptr);

    return 0;
}

