#include <stdio.h>
void average();
int main(int argc, char const *argv[])
{
    average();
    return 0;
}
void average()
{
    int a, banyak, angka;
    float b, c;
    printf("Masukkan banyaknya data: ");
    scanf("%d", &banyak);
    a = 1;
    b = 0;
    while (a <= banyak)
    {
        printf("Masukkan data ke %d: ", a);
        scanf("%d", &angka);
        b = b + angka;
        a++;
    }
    c = b / banyak;
    printf("Rata-Rata semua data adalah %.2f\n", c);
}

//copy as you like