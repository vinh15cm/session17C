#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000 // Ð? dài t?i ða c?a chu?i

void daoNguocChuoi(char *input, char *reverse) {
    int length = strlen(input); // Ð? dài c?a chu?i g?c
    char *start = input + length - 1; // Con tr? tr? t?i k? t? cu?i c?a chu?i g?c

    for (int i = 0; i < length; i++) {
        *(reverse + i) = *(start - i); // Gán k? t? t? cu?i v? ð?u vào reverse
    }
    *(reverse + length) = '\0'; // K?t thúc chu?i ð?o ngý?c b?ng k? t? null
}

int main() {
    char inputString[MAX_LENGTH];    // Chu?i nh?p t? ngý?i dùng
    char reverseString[MAX_LENGTH];  // Chu?i ð?o ngý?c

    // Yêu c?u ngý?i dùng nh?p chu?i
    printf("Nhap mot chuoi: ");
    fgets(inputString, MAX_LENGTH, stdin);

    // Lo?i b? k? t? '\n' cu?i cùng n?u có
    if (inputString[strlen(inputString) - 1] == '\n') {
        inputString[strlen(inputString) - 1] = '\0';
    }

    // G?i hàm ð?o ngý?c chu?i
    daoNguocChuoi(inputString, reverseString);

    // In chu?i g?c và chu?i ð?o ngý?c
    printf("Chuoi goc: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

