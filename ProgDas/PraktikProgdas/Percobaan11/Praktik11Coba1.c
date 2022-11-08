#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 3, y = 4, z = 5;
    int *ix;
    int *iy;

    ix = &x;
    iy = &y;

    *ix = 6;
    *iy = *ix + z;
    z = x + y;

    printf("x = %d, y = %d, z = %d", x,y,z);
    return 0;
}
