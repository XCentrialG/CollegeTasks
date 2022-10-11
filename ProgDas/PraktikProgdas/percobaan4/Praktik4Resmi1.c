#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Masukkan suhu dalam celcius:");
    scanf("%d", &a);
    switch (a)
    {
    case 31:
        printf("Suhu sangat panas");
        break;
    
    case -5:
        printf("Suhu sangat dingin");
        break;

    case 27:
        printf("Suhu sangat sejuk");
        break;

    default:
        break;
    }
    return 0;
}