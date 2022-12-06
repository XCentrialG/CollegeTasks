#include <stdio.h>

int main(int argc, char const *argv[])
{
    char word[] = {"Selamat Pagi"};
    int *ptr1;
    ptr1 = &word;
    printf("%s\n", ptr1);
    printf("Address adalah %x\n", &ptr1);
    return 0;
}
