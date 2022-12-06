#include <stdio.h>
void adder(void);
void subtract(void);
void multi(void);

int main(int argc, char const *argv[])
{
    char com;
    printf("Operator: ");
    scanf("%c", &com);

    switch (com)
    {
    case '*':
        
        multi();
        break;
    
    case '+':
        adder();
        break;

    case '-':
        subtract();
        break;

    default:
        printf("Try again");
        break;
    }
    return 0;
}

void adder(void)
{
    int a, b;
    printf("angka pertama: ");
    scanf("%d", &a);
    printf("angka kedua: ");
    scanf("%d", &b);

    printf("Hasilnya adalah %d", a + b);
}

void subtract(void)
{
    int a, b;
    printf("angka pertama: ");
    scanf("%d", &a);
    printf("angka kedua: ");
    scanf("%d", &b);

    printf("Hasilnya adalah %d", a - b);
}

void multi(void)
{

}