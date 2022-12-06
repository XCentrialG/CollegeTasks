#include <stdio.h>
void fung_a(void);
void fung_b(void);
int x = 20;
int main(int argc, char const *argv[])
{
    x += 2;
    fung_a();
    fung_a();
    printf("\nNilai x dalam main() = %d\n\n", x);
    return 0;
}

void fung_a(void)
{
    static x = 5;
    x++;
    printf("Nilai x dalam fungsi a =%d\n", x);
    fung_b();
}

void fung_b(void)
{
    x--;
    printf("Nilai x dalam fungsi b = %d\n", x);
}