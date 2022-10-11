#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d;
    
    printf("Masukkan panjang, lebar, tinggi\n");
    printf("panjang \(cm\):");
    scanf("%d", &a);
    printf("Lebar\(cm\):");
    scanf("%d", &b);
    printf("Tinggi \(cm\):");
    scanf("%d", &c);

    d = a * b * c;

    printf("Jadi volumenya adalah %d cm kubik\n", d);

    return 0;
}
