#include <stdio.h>

#define MAX_SIZE 100 // K�ch th�?c t?i �a c?a m?ng

// H�m th�m ph?n t? v�o m?ng
void themPhanTu(int arr[], int *n, int value, int position) {
    if (position < 0 || position > *n) {
        printf("Vi tri khong hop le.\n");
        return;
    }
    if (*n >= MAX_SIZE) {
        printf("Mang da day, khong the them phan tu.\n");
        return;
    }

    // D?ch c�c ph?n t? sau v? tr� c?n th�m sang ph?i
    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Th�m gi� tr? m?i v�o v? tr� ch? �?nh
    arr[position] = value;

    // T�ng k�ch th�?c c?a m?ng
    (*n)++;
}

// H�m in m?ng
void inMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5}; // Khai b�o v� g�n gi� tr? cho m?ng
    int n = 5; // S? ph?n t? hi?n t?i trong m?ng

    printf("Mang ban dau: ");
    inMang(arr, n);

    int value, position;

    // Nh?p gi� tr? m?i v� v? tr� c?n th�m
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    printf("Nhap vi tri can them (0 <= vi tri <= %d): ", n);
    scanf("%d", &position);

    // G?i h�m th�m ph?n t?
    themPhanTu(arr, &n, value, position);

    // In m?ng sau khi th�m ph?n t?
    printf("Mang sau khi them phan tu: ");
    inMang(arr, n);

    return 0;
}

