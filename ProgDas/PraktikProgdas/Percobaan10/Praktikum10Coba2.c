#include <stdio.h>
#define N 255
void pengganti(char*, char, char);
int main(int argc, char const *argv[])
{
    char data[N], find, ganti;
    printf("Masukkan sebuah string: ");
    scanf("%[^\n]", data);
    printf("\nHuruf yang akan diganti: ");
    getchar();
    scanf("%c", &find);
    printf("Huruf Pengganti: ");
    getchar();
    scanf("%c", &ganti);
    pengganti(data, find, ganti);
    printf("\nHasil pengganti: %s\n\n", data);
    return 0;
}

void pengganti(char *data, char find, char pengganti)
{
    int i=0;
    while (data != '\0')
    {
        *data = ((*data == find) ?pengganti:*data);
        data++;
        i++;
    }
    
}