#include <stdio.h>
float average(float, float, float);
int matematika(int a);
int fisika(int);
int kimia(int);
int a, b, c;

int main(int argc, char const *argv[])
{
    printf("Nilai mtk: ");
    scanf("%d", &a);
    printf("\n");
    fisika(a);
}

int fisika(int a)
{
    printf("Nilai fisika: ");
    scanf("%d", &b);
    printf("\n");
    kimia(b);
}

int kimia(int b)
{
    printf("Nilai kimia: ");
    scanf("%d", &c);
    printf("\n");
    average(a, b, c);
}

float average(float a, float b, float c)
{
    float avg, sum;
    sum = a + b + c;
    avg = sum / 3;
    printf("rata rata adalah %.1f", avg);
}