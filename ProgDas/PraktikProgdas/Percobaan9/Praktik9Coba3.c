#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, d;
    float total;
    printf ("Jumlah Mahasiswa\t : ");
    scanf ("%d", &c);
    char nama [c] [100];
    float rata [c];
    for (a=0; a<c; a++)
    {
        total=0;
        printf ("\nNama Mahasiswa %d\t : ", a+1);
        scanf ("%s", &nama [a]);
        printf ("Jumlah nilai\t\t : ");
        scanf ("%d", &d);
        float nilai [d];
        for (b=0; b<d; b++)
        {
            printf ("Nilai %d\t\t\t : ", b+1);
            scanf ("%f", &nilai [b]);
            total += nilai [b];
        }
        rata [a] = total/c;
    }
    printf ("\n");
    for (a=0; a<c; a++)
    {
        printf ("Nilai rata-rata %s adalah %f\n", nama [a], rata [a]);
    }
}