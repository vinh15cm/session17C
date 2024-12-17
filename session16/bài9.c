#include <stdio.h>

#define MAX_SIZE 100 // Kích thý?c t?i ða c?a m?ng

// Hàm thêm ph?n t? vào m?ng
void themPhanTu(int arr[], int *n, int value, int position) {
    if (position < 0 || position > *n) {
        printf("Vi tri khong hop le.\n");
        return;
    }
    if (*n >= MAX_SIZE) {
        printf("Mang da day, khong the them phan tu.\n");
        return;
    }

    // D?ch các ph?n t? sau v? trí c?n thêm sang ph?i
    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Thêm giá tr? m?i vào v? trí ch? ð?nh
    arr[position] = value;

    // Tãng kích thý?c c?a m?ng
    (*n)++;
}

// Hàm in m?ng
void inMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5}; // Khai báo và gán giá tr? cho m?ng
    int n = 5; // S? ph?n t? hi?n t?i trong m?ng

    printf("Mang ban dau: ");
    inMang(arr, n);

    int value, position;

    // Nh?p giá tr? m?i và v? trí c?n thêm
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    printf("Nhap vi tri can them (0 <= vi tri <= %d): ", n);
    scanf("%d", &position);

    // G?i hàm thêm ph?n t?
    themPhanTu(arr, &n, value, position);

    // In m?ng sau khi thêm ph?n t?
    printf("Mang sau khi them phan tu: ");
    inMang(arr, n);

    return 0;
}

