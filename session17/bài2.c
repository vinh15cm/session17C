#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Hàm nh?p chu?i
void nhapChuoi(char *str) {
    printf("Nhap vao chuoi: ");
    scanf(" %[^\n]", str); // Ð?c chu?i có kho?ng tr?ng, d?ng khi g?p d?u xu?ng d?ng
}

// Hàm in chu?i
void inChuoi(char *str) {
    printf("Chuoi vua nhap la: %s\n", str);
}

// Hàm ð?m s? lý?ng ch? cái
int demChuCai(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isalpha(*str)) {
            count++;
        }
        str++; // Di chuy?n con tr? ð?n k? t? ti?p theo
    }
    return count;
}

// Hàm ð?m s? lý?ng ch? s?
int demChuSo(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isdigit(*str)) {
            count++;
        }
        str++; // Di chuy?n con tr?
    }
    return count;
}

// Hàm ð?m s? lý?ng k? t? ð?c bi?t
int demKyTuDacBiet(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (!isalnum(*str) && !isspace(*str)) {
            count++;
        }
        str++; // Di chuy?n con tr?
    }
    return count;
}

int main() {
    char str[1000]; // Chu?i lýu tr?, gi?i h?n 1000 k? t?
    int choice;     // L?a ch?n t? menu
    int chuCai, chuSo, kyTuDacBiet;

    do {
        // Hi?n th? menu
        printf("\n===== MENU =====\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi va in ra\n");
        printf("4. Dem so luong chu so trong chuoi va in ra\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi va in ra\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            nhapChuoi(str);
            break;
        case 2:
            inChuoi(str);
            break;
        case 3:
            chuCai = demChuCai(str);
            printf("So luong chu cai trong chuoi la: %d\n", chuCai);
            break;
        case 4:
            chuSo = demChuSo(str);
            printf("So luong chu so trong chuoi la: %d\n", chuSo);
            break;
        case 5:
            kyTuDacBiet = demKyTuDacBiet(str);
            printf("So luong ky tu dac biet trong chuoi la: %d\n", kyTuDacBiet);
            break;
        case 6:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long thu lai!\n");
        }
    } while (choice != 6);

    return 0;
}

