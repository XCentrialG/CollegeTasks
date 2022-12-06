#include <stdio.h>
void even();
int main(int argc, char const *argv[])
{
    even();
    return 0;
}

void even()
{
    int a, b, banyak, input;
    printf("Masukkan banyak data: ");
    scanf("%d", &banyak);
    a = 1;
    b = 0;
    do
    {
        printf("Masukkan data ke %d : ", a);
        scanf("%d", &input);
        if (input % 2 != 1)
        {
            b = b + input;
        }
        a++;
    } 
    while (a <= banyak);
    printf("Hasil Penjumlahan data genap = %d\n", b);
}

// copy as you like