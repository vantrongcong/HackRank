/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang sau khi nhap:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}




//Nhap chuoi
int main() {
    char arr[MAX_SIZE];

    printf("Nhap chuoi: ");
    scanf("%[^\n]", arr);

    printf("Chuoi sau khi nhap: %s\n", arr);

    return 0;
}