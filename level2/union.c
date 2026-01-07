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
//ilk stringi aynı karakterleri tekrar basmadan komple yazıcak daha sonra ikinci stringde
//birinci stringe olmayan ve tekrarlamayan karakterleri yazıcak birleştiricek string 1 le

//örneğin: s1: "abc" s2: "bcd" -> "abcd" yazdırır
//örneğin: s1: "hello" s2: "world" -> "helowrd" yazdırır
//örneğin: s1: "aaabbb" s2: "bbbaaa" -> "" yazdırır çünkü tüm karakterler tekrarlıyor
//örneğin: s1: "abcd" s2: "efgh" -> "abcdefgh" yazdırır çünkü tüm karakterler farklı
//örneğin: s1: "" s2: "abc" -> "abc" yazdırır çünkü birinci string boş

