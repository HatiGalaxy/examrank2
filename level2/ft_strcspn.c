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

//örneğin: s1: "1hello23" reject: "123" -> 5 döndürür çünkü '1' karakteri 5. pozisyonda
//örneğin: s1: "abcdef" reject: "xyz" -> 6
//örneğin: s1: "12345" reject: "345" -> 2 döndürür çünkü '3' karakteri 2. pozisyonda
//örneğin: s1: "abcdef" reject: "" -> 6 döndür
//örneğin: s1: "" reject: "abc" -> 0 döndürür çünkü s1 boş
