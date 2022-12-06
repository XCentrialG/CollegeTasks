#include <stdio.h>
void exchange(int *a, int *b);
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Masukkan Bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);
    exchange(&a, &b);
    printf("Bilangan pertama adalah %d dan bilangan kedua adalah %d", a, b);
    return 0;
}
void exchange(int *a, int *b)
{
    int c;
    c = 0;
    c = *a;
    *a = *b;
    *b = c;
}