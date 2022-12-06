#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    char op;
    double a, b;
    printf("masukkan operasi\n");
    scanf("%c", &op);
    printf("masukkan bilangan pertama dan kedua\n");
    scanf("%lf %lf", &a, &b);

    switch (op)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", a, b, a + b);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", a, b, a - b);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", a, b, a * b);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", a, b, a / b);
        break;
    default:
        printf("typo mas?");
        break;
    }

    return 0;
}
