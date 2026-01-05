#include <unistd.h>

int	is_in_string(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	already_seen(char c, char *str, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			// Karakter ikinci stringde var VE daha önce yazılmadıysa
			if (is_in_string(argv[1][i], argv[2]) && 
				!already_seen(argv[1][i], argv[1], i))
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


//iki argüman alıcak ve ilk stringde olan şey ikincide de olması lazım
//ve aynı char ı tekrar yazmicak. bu kural olduğu sürece ilk stringi yazıcak.