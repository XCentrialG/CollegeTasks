#include <stdio.h>
int main(int argc, char const *argv[])
{
    int line, coloumn;
    for (line = 1; line <= 5; line++)
    {
        for (coloumn = 1; coloumn <= 5; coloumn++)
        {
            if (coloumn == line || line + coloumn == 6)
            {
                printf("@");
            }
            else
            {
                printf("=");
            }
        }
        printf("\n");
    }
    
    return 0;
}
