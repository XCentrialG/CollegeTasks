#include <stdio.h>
void average(void);

int main(int argc, char const *argv[])
{
    float avg, a, b, math, psy, chm;
    printf("Masukkan Nilai mtk: ");
    scanf("%f", &math);
    printf("Masukkan Nilai fisika: ");
    scanf("%f", &psy);
    printf("Masukkan Nilai Kimia: ");
    scanf("%f", &chm);

    printf("Nilai rata-ratanya adalah %.1f\n", avg);
}