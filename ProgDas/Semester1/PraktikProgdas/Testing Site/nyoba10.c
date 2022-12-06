#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char name[255];
    int *ptr1;
    printf("Ketik sebuah string: ");
    scanf("%s", &name);
    ptr1 = name;
    printf("Panjang %d", strlen(ptr1));
    return 0;
}
