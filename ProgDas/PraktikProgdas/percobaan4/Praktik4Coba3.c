#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Masukkan 3 angka:");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b)
        if (a < c)
        {
            printf("Angka yang terkecil adalah %d", a);
        }
        else
        {
            printf("Angka yang terkecil adalah %d", b);
        }
    else if (b < c)
    {
        printf("Angka yang terkecil adalah %d", b);
    }
    else
    {
        printf("Angka yang terkecil adalah %d", c);
    }

    return 0;
}