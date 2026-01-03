#include <unistd.h>
#include <stdio.h>  
#include <stdlib.h>


int main(int ac, char const **av)
{
    if(ac == 4)
    {
        int s1 = atoi(av[1]);
        int s2 = atoi(av[3]);
        char op = av[2][0];

        if (op == '+')
            printf("%d", s1 + s2);
        else if(op == '-')
            printf("%d", s1 - s2);
        else if(op == '*')
            printf("%d", s1 - s2);
        else if(op == '/')
            printf("%d", s1 - s2);
        else if(op == '%')
            printf("%d", s1 - s2);
        
        
    }
    write(1,"\n",1);
    return 0;
}






