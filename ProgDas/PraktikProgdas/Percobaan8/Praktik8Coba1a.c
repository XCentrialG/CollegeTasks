#include <stdio.h>
int OddEvenTest(int);
int main(int argc, char const *argv[])
{
    int a, hasil;
    a = 5;                                          // a = 5
    hasil = OddEvenTest(a);                         // a = 5    hasil = 1
    printf("a = %d hasil = %d\n", a, hasil);        // a = 5    hasil = 1
}

int OddEvenTest(int b)                              // b = 5
{
    int a;
    a = b % 2;                                      // a = 1    b = 5
    return a;                                       // a = 1
}

/* 
   Fungsi didefinisikan sekali tetapi bisa digunakan beberapa kali. Nilai dari
   fungsi main() adalah 5. Pada saat pernyataan hasil = OddEvenTest(a) dijalankan,
   maka eksekusi akan diarahkan ke fungsi oddEvenTest(int), selanjutnya nilai
   keluaran akhir akan diberikan kepada hasil. Pada fungsi int oddEvenTest(int b)
   terdapat satu parameter variable b. nilai a pada fungsi main sama dengan nilai b
   yaitu 5, hal tersebut karena pada fungsi tersebut memanggil fungsi yang telah
   dideklarasikan sebelumnya. Lalu pada fungsi tersebut juga dideklarasikan bahwa
   nilai a=b%2 artinya a=5%2=1. Kemudian masuk ke return (a) yang artinya kembali 
   ke nilai a yaitu 1
*/