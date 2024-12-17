#include <stdio.h>

// Ham tinh tong hai so nguyen va luu vao bien ket qua su dung con tro
void tinhTong(int a, int b, int *ketQua) {
    *ketQua = a + b; // Luu tong cua a va b vao bien ket qua
}

int main() {
    int x = 7, y = 15; // Khai bao va gan gia tri cho hai bien so nguyen
    int ketQua;        // Khai bao bien ket qua

    // Goi ham tinhTong va truyen tham so
    tinhTong(x, y, &ketQua);

    // In ket qua
    printf("Tong cua %d va %d la: %d\n", x, y, ketQua);

    return 0;
}

