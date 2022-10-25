#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, d, e;          // variables, not for input from keyboard
    printf ("Masukkan jumlah karakter yang akan dihitung : ");
    scanf ("%d", &b);
    char kar1 [b];
    char kar2 [b];
    for (a=0; a<b; a++)
    {
        printf ("Masukkan karakter ke-%d : ", a+1);
        scanf (" %c", &kar1 [a]);
    }
    for (c=0; c<b; c++)
    {
        e=0;
        for (d=0; d<b; d++)
        {
            if (kar1 [c] == kar1 [d])
            {
                e++;
                kar2 [c] = e;
            }
        }
    }
    for (c=0; c<b; c++)
    {
        if (c>0)
        {
            for (d=0; d<c; d++)
            {
                if (kar1 [c] == kar1 [d] && kar2 [c] == kar2 [d])
                {
                    goto stop;
                }
            }
        }
        printf ("\nFrekuensi %c = %d\n", kar1 [c], kar2 [c]);
        stop:
            c--;
            c++;
    }
}
