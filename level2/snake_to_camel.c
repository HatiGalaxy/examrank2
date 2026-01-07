#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    while(av[1][i])
    {
        if(av[1][i] == '_')
        {
            i++;
            if(av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] -= 32;
        }
        write(1, &av[1][i], 1);
			i++;
        
    }
    write(1, "\n", 1);
	return (0);
}

//amaç verilen snake_case stringini camelCase e çevirmek.
//örneğin "hello_world" -> "helloWorld"
//alt çizgi '_' gördüğünde bir sonraki karakteri büyük yapıyor ve alt çiz
//görünce atlıyor.
