
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int dem;

    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);

    dem = strlen(s);

    if (dem > 0 && s[dem - 1] == '\n') {
        dem--;
    }

    printf("So ky tu la: %d\n", dem);

    return 0;
}
