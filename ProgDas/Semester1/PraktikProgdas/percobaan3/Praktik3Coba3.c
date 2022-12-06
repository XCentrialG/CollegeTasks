#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Masukkan bilangan pertama\n");
    scanf("%d", &a);
    printf("Masukkan bilagan kedua\n");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("jadi bilangan pertama sekarang %d\n", a);
    printf("jadi bilangan kedua sekarang %d\n", b);

    return 0;
}
