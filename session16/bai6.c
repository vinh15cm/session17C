#include <stdio.h>

// Ham tim kiem phan tu trong mang
int timKiemPhanTu(int *arr, int n, int giaTri) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == giaTri) { // So sanh gia tri can tim voi gia tri trong mang
            return i; // Tra ve vi tri khi tim thay
        }
    }
    return -1; // Tra ve -1 neu khong tim thay
}

// Ham in mang
void inMang(int *arr, int n) {
    printf("Mang hien tai: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Khai bao va gan gia tri cho mang
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]); // Tinh so phan tu cua mang

    // In mang ban dau
    printf("Mang ban dau:\n");
    inMang(arr, size);

    // Nhap gia tri can tim kiem
    int giaTriCanTim;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &giaTriCanTim);

    // Goi ham timKiemPhanTu
    int viTri = timKiemPhanTu(arr, size, giaTriCanTim);

    // Kiem tra va in ket qua tra ve
    if (viTri != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d (chi so tu 0).\n", giaTriCanTim, viTri);
    } else {
        printf("Gia tri %d khong ton tai trong mang.\n", giaTriCanTim);
    }

    return 0;
}

