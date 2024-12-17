#include <stdio.h>

// Ham cap nhat phan tu trong mang
void capNhatPhanTu(int *arr, int n, int viTri, int giaTriMoi) {
    if (viTri >= 0 && viTri < n) { // Kiem tra vi tri hop le
        arr[viTri] = giaTriMoi;    // Cap nhat gia tri moi tai vi tri chi dinh
    } else {
        printf("Vi tri khong hop le!\n");
    }
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
    int arr[] = {1, 2, 3, 4, 5}; // Khai bao va gan gia tri cho mang
    int size = sizeof(arr) / sizeof(arr[0]); // Tinh so phan tu cua mang

    printf("Mang ban dau:\n");
    inMang(arr, size);

    // Goi ham capNhatPhanTu de cap nhat phan tu
    int viTri, giaTriMoi;
    printf("Nhap vi tri can cap nhat: ");
    scanf("%d", &viTri);
    printf("Nhap gia tri moi: ");
    scanf("%d", &giaTriMoi);

    capNhatPhanTu(arr, size, viTri, giaTriMoi);

    // In mang sau khi cap nhat
    printf("Mang sau khi cap nhat:\n");
    inMang(arr, size);

    return 0;
}

