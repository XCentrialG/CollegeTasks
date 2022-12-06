#include <stdio.h>
void big();
int main(int argc, char const *argv[])
{
    big();
    return 0;
}
void big()
{
    int a, b, c;
    printf("Masukkan 3 buah bilangan: \n");
    scanf("%d\n%d\n%d", &a,&b,&c);
    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("angka terbesar adalah %d\nangka terkecil adalah %d", a, c);

        }
        else
        {
            printf("angka terbesar adalah %d\nangka terkecil adalah %d", a, b);
        }
    }
    else if (b > c && b > a)
    {
        if (c < a)
        {
            printf("angka terbesar adalah %d\nangka terkecil adalah %d", b, c);
        }
        else
        {
            printf("angka terbesar adalah %d\nangka terkecil adalah %d", b, a);
        }
    }
    else if (c > a && c > b)
    {
        if (b < a)
        {
            printf("angka terbesar adalah %d\nangka terkecil adalah %d", c, b);
        }
        else
        {
            printf("angka terbesar adalah %d\nangka terkecil adalah %d", c, a);
        }
    }
    
}