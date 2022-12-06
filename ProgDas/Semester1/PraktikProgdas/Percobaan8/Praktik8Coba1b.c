#include <stdio.h>
void demo(void);
int main(int argc, char const *argv[])
{
    int i = 0;
    while (i < 3)
    {
        demo();
        i++;
    }
}

void demo(void)
{
    auto int var_auto = 0;
    static int var_static = 0;
    printf("auto = %d, static = %d\n", var_auto, var_static);
    var_auto++;
    var_static++;
}

/*
Nilai variable auto tetap 0 karena variable auto hanya dipakai oleh satu fungsi
dimana dia dideklarasikan, jadi variabel i pada fungsi main() tidak ada kaitannya
dengan demo(void). Sedangkan variable static nilai pada variable akan tetap
diingat meskipun keluar dari fungsi sehingga fungsi demo(void) berkaitan
dengan deklarasi pada main() jadi nilai variable static mulai dari 0 dan selalu
bertambah 1 hingga nilai kurang dari 3
*/