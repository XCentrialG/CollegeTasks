#include <stdio.h>

float average(float);

int main(int argc, char const *argv[])
{
    float avg, a, b;
    int math, psy, chm;
    printf("Masukkan Nilai mtk: ");
    scanf("%d", &math);
    printf("Masukkan Nilai fisika: ");
    scanf("%d", &psy);
    printf("Masukkan Nilai Kimia: ");
    scanf("%d", &chm);

    average(avg);

    printf("Nilai rata-ratanya adalah %.1f\n", average);
    return 0;
}

float average(float avg)
{
    
    float math, psy, chm;
    avg = math + psy + chm / 3;
}