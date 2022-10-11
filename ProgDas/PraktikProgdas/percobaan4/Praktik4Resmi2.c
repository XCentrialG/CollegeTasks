#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a;
    printf("Masukkan niai huruf:");
    scanf("%c", &a);
    if (a == 'A')
    {
        printf("Nilai angka 4");
    }
    else if (a == 'B')
    {
        printf("Nilai angka 3");
    }
    else if (a == 'C')
    {
        printf("Nilai angka 2");
    }
    else if (a == 'D')
    {
        printf("Nilai angka 1");
    }
    else if (a == 'E')
    {
        printf("Nilai angka 0");
    }
    
    return 0;
}
