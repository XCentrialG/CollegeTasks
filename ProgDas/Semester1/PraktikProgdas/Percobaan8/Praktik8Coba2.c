#include <stdio.h>
int feet_to_inch(int);
int inch_to_cm(int);
float cm_to_m(float);
int main(int argc, char const *argv[])
{
    int f;
    printf("\t\tProgram Konversi Panjang\t\t\n\n");
    printf("Masukkan panjang (f): ");
    scanf("%d", &f);
    printf("\n");
    feet_to_inch(f);
    return 0;
}

int feet_to_inch(int f)
{
    int i;
    i = f * 12;
    printf("%d feet ke inci adalah %d inci\n\n", f, i);
    inch_to_cm(i);
}

int inch_to_cm(int i)
{
    float cm;
    cm = i * 2.54;
    printf("%d inci ke cm adalah %g cm\n\n", i, cm);
    cm_to_m(cm);
}

float cm_to_m(float cm)
{
    float m;
    m = cm / 100;
    printf("%g cm ke m adalah %g m\n\n", cm, m);
}