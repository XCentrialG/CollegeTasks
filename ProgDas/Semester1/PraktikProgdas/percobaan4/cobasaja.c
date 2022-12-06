#include <stdio.h>
int main(int argc, char const *argv[])
{
    char isRepeat = 'y';

    while (isRepeat == 'Y' || isRepeat == 'y') {
        int a, b, c;
        printf("Masukkan bilangan : ");
        scanf("%d", &a);
        printf("Masukkan bilangan pembagi(2/3/4/5) : ");
        scanf("%d", &b);
        c = a % b;
        if (c > 0) 
        {
            printf("sisa bagi : %d", c);
        } 
        else 
        {
            printf("sisa bagi : 0");
        }
        printf("\napakah anda ingin meneruskan : ");
        scanf(" %c", &isRepeat);
    }
    
    return 0;
}
