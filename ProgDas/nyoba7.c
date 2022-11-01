#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    char name[255];
    printf("Masukkan string: ");
    gets(name);
    printf("\nJadi Panjang string adalah %d\n", strlen(name));
    return 0;
}