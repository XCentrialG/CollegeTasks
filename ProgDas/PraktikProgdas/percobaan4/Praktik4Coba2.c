#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a;
    printf("Masukkan nilai huruf:");
    scanf("%c", &a);
    switch (a)
    {
    case 'A':
        printf("Nilai angka 4");
        break;
    
    case 'B':
        printf("Nilai angka 3");
        break;

    case 'C':
        printf("Nilai angka 2");
        break;

    case 'D':
        printf("Nilai angka 1");
        break;

    case 'E':
        printf("Nilai angka 0");
        break;
    default:
        break;
    }
    
    return 0;
}
