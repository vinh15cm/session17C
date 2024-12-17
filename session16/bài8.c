#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000 // �? d�i t?i �a c?a chu?i

void daoNguocChuoi(char *input, char *reverse) {
    int length = strlen(input); // �? d�i c?a chu?i g?c
    char *start = input + length - 1; // Con tr? tr? t?i k? t? cu?i c?a chu?i g?c

    for (int i = 0; i < length; i++) {
        *(reverse + i) = *(start - i); // G�n k? t? t? cu?i v? �?u v�o reverse
    }
    *(reverse + length) = '\0'; // K?t th�c chu?i �?o ng�?c b?ng k? t? null
}

int main() {
    char inputString[MAX_LENGTH];    // Chu?i nh?p t? ng�?i d�ng
    char reverseString[MAX_LENGTH];  // Chu?i �?o ng�?c

    // Y�u c?u ng�?i d�ng nh?p chu?i
    printf("Nhap mot chuoi: ");
    fgets(inputString, MAX_LENGTH, stdin);

    // Lo?i b? k? t? '\n' cu?i c�ng n?u c�
    if (inputString[strlen(inputString) - 1] == '\n') {
        inputString[strlen(inputString) - 1] = '\0';
    }

    // G?i h�m �?o ng�?c chu?i
    daoNguocChuoi(inputString, reverseString);

    // In chu?i g?c v� chu?i �?o ng�?c
    printf("Chuoi goc: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

