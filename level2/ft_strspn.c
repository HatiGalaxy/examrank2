#include <stdio.h>


size_t ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t j;
    int found;

    while(s[i])
    {
        j = 0;
        found = 0;

        while(accept[j])
        {
            if(s[i] == accept[j])
            {
                found = 1;
                break;
            }

            j++;
           
            
        }
         if(found == 0)
                return(i);
        i++;
    }
    return (i);
}



//accept içindekileri s1 içinde aricak buldukça aramaya devam
//etcek eğer bulamazsa found = 0 olduğu anda program durur 
//uzunluk döndürür.

//örneğin: s1: "hello123" accept: "hel" -> 3 döndürür çünkü 'h','e','l' bulunuyor ama 'o' bulunmuyor
//örneğin: s1: "abcdef" accept: "xyz" -> 0
//örneğin: s1: "12345" accept: "1234567890" -> 5 döndürür çünkü tüm karakterler bulunuyor
//örneğin: s1: "abcde" accept: "" -> 0 döndürür çünkü accept boş
//örneğin: s1: "" accept: "abc" -> 0 döndürür çünkü s1 boş
//örneğin: s1: "aaaaabbbbcccdde" accept: "abc" -> 13 döndürür çünkü 'a','b','c' karakterleri bulunuyor ama 'd' bulunmuyor
//örneğin: s1: "xyzxyzxyz" accept: "xyz" -> 9 döndürür çünkü tüm karakterler bulunuyor





