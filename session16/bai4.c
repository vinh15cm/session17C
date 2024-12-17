#include <stdio.h>

// Ham in tat ca phan tu trong mang su dung con tro
void inMang(int *arr, int n) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i)); // Truy cap phan tu bang con tro
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Khai bao va gan gia tri cho mang
    int size = sizeof(arr) / sizeof(arr[0]); // Tinh so phan tu cua mang

    // Goi ham inMang va truyen mang vao
    inMang(arr, size);

    return 0;
}

