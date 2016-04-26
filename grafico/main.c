#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int valor[] = {1, 3, 5};
    int i;
    int j;
    int max;





    max = 0;
    for (i = 0; i < 3; i++)
    if (valor[i] > max)
    max = valor[i];

    for (i = max; i > 0; i--)
    {
        for (j = 0; j < 3; j++)
        {
            if (valor[j] >= i)
            {
                printf("   * ");
            }
            else
            {
                printf("     ");
            }
        }

    putchar('\n');
    }
    printf(" < 18 19-35  >35");

return EXIT_SUCCESS;
}
