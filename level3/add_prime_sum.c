#include <unistd.h>

void ft_putnbr(int n)
{
    char c;
    if (n >= 10)
        ft_putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int result = 0;
    int i = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result);
}

int is_prime(int n)
{
    int i;
    if (n <= 1)
        return (0);
    if (n == 2)
        return (1);
    if (n % 2 == 0)
        return (0);
    i = 3;
    while (i * i <= n)
    {
        if (n % i == 0)
            return (0);
        i += 2;
    }
    return (1);
}

int main(int ac, char **av)
{
    int nbr;
    int sum;
    int i;
    if (ac == 2)
    {
        nbr = ft_atoi(av[1]);
        if (nbr > 0)
        {
            sum = 0;
            i = 2;
            while (i <= nbr)
            {
                if (is_prime(i))
                    sum += i;
                i++;
            }
            ft_putnbr(sum);
            write(1, "\n", 1);
            return (0);
        }
    }
    write(1, "0\n", 2);
    return (0);
}


//girilen sayıdan önceki var olan asal sayıların toplamını bastıran program
// örenk '10' girdiysek önceki asal sayıları bulcak "2, 3,5,7" ve bunları toplicak "17" basıcak ekrana.