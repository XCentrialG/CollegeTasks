#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a[30];
    int b;
    float c;

    printf("Masukkan data diri anda\n ");
    printf("Nama: ");
    scanf("%s", &a);
    printf("Umur: ");
    scanf("%d", &b);
    printf("No telfon: ");
    scanf("%d", &c);

    printf("Hello %s, umur %d, no telp %d\n", a, b, c);
    printf("Bagaimana kabar hari ini?\n");

    return 0;
}
