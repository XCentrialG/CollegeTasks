#include <stdio.h>
void sum(int math1[][2], int math2[][2]);
int main(int argc, char const *argv[])
{
    int math1 [2] [2] = {2,4,6,8};
    int math2 [2] [2] = {1,3,5,7};
    sum (math1,math2);
}
 
 void sum (int math1[][2], int math2[][2])
 {
     int i,j,jml[2][2];
     printf ("Hasil penjumlahan matriks\n");
     for (i=0; i<2; i++)
     {
         for (j=0; j<2; j++)
         {
             jml[i][j]=math1[i][j]+math2[i][j];
             printf ("%5d", jml[i][j]);
         }
         printf ("\n");
     }
 }