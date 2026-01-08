#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i;
    int size;
    int step;
    int *array;

    size = (start <= end) ? (end - start + 1) : (start - end + 1);
    step = (start <= end) ? -1 : 1;

    array = malloc(sizeof(int) * size);
    if (!array)
        return (NULL);


    i = 0;

    while(i < size)
    {
        array[i] = end;
        end += step;
        i++;
    }
    return (array);

}

// range ile aynı burda da tersten yapıyo (3,5) i 5,4,3 diye yazcak