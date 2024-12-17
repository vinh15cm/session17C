#include <stdio.h>
#include <stdlib.h>

// H�m nh?p c�c ph?n t? v�o m?ng
void nhapMang(int **arr, int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);

    *arr = (int *)malloc(*n * sizeof(int)); // C?p ph�t b? nh? �?ng cho m?ng
    if (*arr == NULL) {
        printf("Loi cap phat bo nho.\n");
        exit(1);
    }

    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", (*arr) + i); // Nh?p t?ng ph?n t? qua con tr?
    }
}

// H�m hi?n th? c�c ph?n t? trong m?ng
void hienThiMang(int *arr, int n) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i)); // Duy?t qua m?ng b?ng con tr?
    }
    printf("\n");
}

// H�m t�nh �? d�i m?ng
int tinhDoDai(int n) {
    return n;
}

// H�m t�nh t?ng c�c ph?n t? trong m?ng
int tinhTong(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i); // C?ng d?n gi� tr? t?ng ph?n t?
    }
    return sum;
}

// H�m t?m ph?n t? l?n nh?t trong m?ng
int timMax(int *arr, int n) {
    int max = *arr; // Gi? s? ph?n t? �?u ti�n l� l?n nh?t
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int *arr = NULL; // Con tr? tr? �?n m?ng
    int n = 0;       // S? ph?n t? trong m?ng
    int choice;      // L?a ch?n t? menu

    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            nhapMang(&arr, &n);
            break;
        case 2:
            if (arr == NULL) {
                printf("Mang chua duoc nhap.\n");
            } else {
                hienThiMang(arr, n);
            }
            break;
        case 3:
            printf("Do dai cua mang: %d\n", tinhDoDai(n));
            break;
        case 4:
            if (arr == NULL) {
                printf("Mang chua duoc nhap.\n");
            } else {
                printf("Tong cac phan tu: %d\n", tinhTong(arr, n));
            }
            break;
        case 5:
            if (arr == NULL) {
                printf("Mang chua duoc nhap.\n");
            } else {
                printf("Phan tu lon nhat: %d\n", timMax(arr, n));
            }
            break;
        case 6:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long thu lai!\n");
        }
    } while (choice != 6);

    // Gi?i ph�ng b? nh? �?ng
    if (arr != NULL) {
        free(arr);
    }

    return 0;
}

