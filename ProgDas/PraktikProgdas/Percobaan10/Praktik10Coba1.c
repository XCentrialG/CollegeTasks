#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char text[255], kata[255];
    int i, j=0, sign1=0, sign2=0;
    printf("Kalimat: ");
    gets(text);
    i = strlen(text)-1;
    for (size_t i; i >= 0; i--)
    {
        kata[j]=toupper(text[i]);
        sign2++;
        j++;
    }
    for (size_t i = 0; i < kata[i]; i++)
    {
        if (kata[i]==toupper(text[i]))
        {
            sign1++;
        }
    }
    if (sign1 == sign2)
    {
        puts("Termasuk PALINDROM");
    }
    else
    {
        puts("Bukan PALINDROM");
    }
    return 0;
}
