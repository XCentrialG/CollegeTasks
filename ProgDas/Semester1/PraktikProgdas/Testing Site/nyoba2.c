#include <stdio.h>
int main(int argc, char const *argv[])
{
    double intA, intB, sum;
    char op;
    printf("Masukkan operator: ");
    scanf("%c", &op);
    printf("Masukkan bil 1: ");
    scanf("%lf", &intA);
    printf("Masukkan bil 2: ");
    scanf("%lf", &intB);
    

    switch (op)
    {
    case '+':
        printf("Hasil: \n %.0lf + %.0lf = %.0lf", intA, intB, intA + intB);
        break;

    case '-':
        printf("Hasil: \n %.0lf - %.0lf = %.0lf", intA, intB, intA - intB);
        break;
    
    case '/':
        printf("Hasil: \n %.0lf / %.0lf = %.0lf", intA, intB, intA / intB);
        break;
    
    case '*':
        printf("Hasil: \n %.0lf * %.0lf = %.0lf", intA, intB, intA * intB);
        break;

    default:
        break;
    }
    return 0;
}
