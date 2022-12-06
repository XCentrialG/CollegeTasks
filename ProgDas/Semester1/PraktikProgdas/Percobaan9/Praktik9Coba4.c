#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, num[10];
    for (size_t a = 0; a < 10; a++)
    {
        printf("Masukkan angka ke %d\t: ", a+1);
        scanf("%d", &num[a]);
    }
    for (size_t a = 0; a < 10; a++)
    {
        for (size_t b = 0; b < 10;b++)
        {
            if (num[a] >= num[b])
            {
                c = num[b];
                num[b] = num[a];
                num[a] = c;
            }
            
        }
        printf("\nUrutan bilangan dari yang terbesar : ");
        for (size_t a = 0; a < 10; a++)
        {
            printf("%d ", num[a]);
        }
        
    }
    
    return 0;
}
