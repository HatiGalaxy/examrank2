#include <stdio.h>


size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j;
	while(s[i])
	{
		j = 0;
		while (reject[j])
		{
			if(s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}


//amaç = string içinde reject yani verilen bi char bulursa orda durup başın uzunluğu 
//dönücek eğer reject bulamazsa direkt stringin uzunluğu dönücek.
