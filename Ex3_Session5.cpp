#include <stdio.h>

int main() {
    int n, a  = 0;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            a += i;
        }
        printf("t]Tong tu 1 den %d la : %d\n", n, a);
    } else {
        printf("Nhap lai so nguyen duong.\n");
    }

    return 0;
}
