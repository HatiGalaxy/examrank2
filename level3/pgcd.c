#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *avv)
{
    int a;
    int b;
    int temp;

    if(ac == 3)
    {
        a = atoi(av[1]);
        b = atoi(av[2]);

        if(a > 0 && b > 0)
        {
            while(b != 0)
            {
                temp = b;
                b = a % b;
                a = temp;
            }
            printf("%d",a);
        }
    }
    printf("\n");
}


//ebob sorusu ama argüman olarak 