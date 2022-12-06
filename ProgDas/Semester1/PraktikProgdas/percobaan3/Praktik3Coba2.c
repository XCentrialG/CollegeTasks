#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;

    printf("Masukkan kecepatan dan waktu mobil anda!\n");
    printf("Kecepatan \(m/detik\)\n");
    scanf("%d", &a);
    printf("Waktu \(detik\)\n");
    scanf("%d", &b);

    c = a * b;

    printf("Jadi jarak tempuh anda %d meter.\n", c);

    return 0;
}
