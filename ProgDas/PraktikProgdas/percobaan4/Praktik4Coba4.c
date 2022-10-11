#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Masukkan pemakaian rekening listrik:");
    scanf("%d", &a);

    if (a <= 100)
    {
        b = 100000;
    }
    else if (100 < a <= 500)
    {
        b = 100000 + 2000 * (a - 100);
    }
    else if (a > 500)
    {
        b = 700000 + 2000 * (a - 500);
    }
    
    printf("Biaya pemakaian %d", b);
    return 0;
}
