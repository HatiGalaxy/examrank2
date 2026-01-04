#include <unistd.h>

int string(char c, char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i]== c)
            return(1);
        i++;
    }
    return(0);
}


int again(char c, char *str, int pos)
{
    int i;

    i = 0;
    while(i < pos)
    {
        if(str[i] == c)
            return(1);
        i++;
    }
    return(0);
}
int main(int ac, char **av)
{
    int i;

    if(ac == 3)
    {
        i = 0;
        while(av[1][i])
        {
            if(!again(av[1][i], av[1], i))
                write(1,&av[1][i],1);
            i++;
        }

        i = 0;
        while(av[2][i])
        {
            if(!string(av[2][i],av[1]) && !again(av[2][i], av[2], i))
                write(1,&av[2][i],1);
            i++;

        }

    
    }
    write(1, "\n", 1);
	return (0);

}