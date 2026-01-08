#include <stdlib.h>

int    *ft_range(int start, int end)
{
    int *array;
    int size;
    int step; //sayılar artarak mı azalarak mı artar ona bakar
    int i;

    size = (start <= end) ? (end - start + 1) : (start - end + 1);
    step = (start <= end) ? 1 : -1;

    array = malloc(sizeof(int) * size);
    if(!array)
        return(NULL);
    
    i = 0;

    while(i < size)
    {
        array[i] = start;
        start += step;
        i++;


    }

    return(array);
}


//örnek = (3,5) se o aralığı yazıcak , 3,4,5

