#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("masukkan nilai anda:");
    scanf("%d", &a);
    if (a > 80)
    {
        printf("konversi angka ke huruf dari %d adalah A", a);
    }
    else if (80 >= a && a > 70)
    {
        printf("konversi angka ke huruf dari %d adalah B", a);
    }
    else if (70 >= a && a > 60)
    {
        printf("konversi angka ke huruf dari %d adalah C", a);
    }
    else if (60 >= a && a > 50)
    {
        printf("konversi angka ke huruf dari %d adalah D", a);
    }
    else if (a <= 50)
    {
        printf("konversi angka ke huruf dari %d adalah E", a);
    }
    return 0;
}
