#include <stdio.h>

// Ham hoan doi gia tri su dung con tro
void swap(int *a, int *b) {
    int temp = *a;  // Luu gia tri cua *a vao bien tam
    *a = *b;        // Gan gia tri cua *b cho *a
    *b = temp;      // Gan gia tri cua bien tam cho *b
}

int main() {
    int x = 5, y = 10; // Khai bao va gan gia tri cho 2 bien

    printf("Gia tri ban dau:\n");
    printf("x = %d, y = %d\n", x, y);

    // Goi ham swap de hoan doi gia tri cua x va y
    swap(&x, &y);

    printf("\nGia tri sau khi hoan doi:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

