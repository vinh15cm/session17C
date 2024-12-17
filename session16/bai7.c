#include <stdio.h>

// H�m s?p x?p m?ng theo th? t? t�ng d?n
void sapXepMang(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Ho�n �?i gi� tr? n?u ph?n t? tr�?c l?n h�n ph?n t? sau
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// H�m in m?ng
void inMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Khai b�o v� g�n gi� tr? cho m?ng
    int arr[] = {9, 5, 2, 8, 1, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]); // T�nh s? ph?n t? c?a m?ng

    printf("Mang truoc khi sap xep: ");
    inMang(arr, n);

    // G?i h�m s?p x?p m?ng
    sapXepMang(arr, n);

    printf("Mang sau khi sap xep tang dan: ");
    inMang(arr, n);

    return 0;
}

