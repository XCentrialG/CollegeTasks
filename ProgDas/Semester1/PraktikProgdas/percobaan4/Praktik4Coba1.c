#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Masukkan suhu dalam celcius:");
    scanf("%d", &a);
    if (a > 30)
    {
        printf("Suhu sangat panas");
    }
    else if (a < 0)
    {
        printf("Suhu sangat dingin");
    }
    else
    {
        printf("Suhu sangat sejuk");
    }
    return 0;
}