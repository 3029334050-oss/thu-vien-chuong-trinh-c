
#include <stdio.h>
// thêm mới

int main() {
    int a, b, max;

    printf("Nhap so a: ");
    scanf("%d", &a);

    printf("Nhap so b: ");
    scanf("%d", &b);

    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    printf("So lon nhat la: %d\n", max);

    return 0;
}
