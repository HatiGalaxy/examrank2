#include <stdlib.h>

int    *ft_range(int start, int end)
{
    int *array;
    int size;
    int step; //sayılar artarak mı azalarak mı artar ona bakar
    int i;

    size = (start <= end) ? (end - start + 1) : (start - end + 1);
    step = (start <= end) ? 1 : -1

    array = malloc(sizeof(int) * size);
    if(!array)
        return(NULL);

    while(i < size)
    {
        array[i] = start;
        start += step;


    }

    return(array);
}
