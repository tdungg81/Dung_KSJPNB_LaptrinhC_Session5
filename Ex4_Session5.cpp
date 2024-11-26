#include <stdio.h>

int main() {
    int a;

    printf("Nhap mot so nguyen tu 1 den 10: ");
    scanf("%d", &a);

    if (a >= 1 && a <= 10) {
        printf("Bang cu chuong cua %d la:\n", a);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", a, i, a * i);
        }
    } else {
        printf("Nhap lai so nguyen duong\n");
    }

    return 0;
}
