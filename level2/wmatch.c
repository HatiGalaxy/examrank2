
#include <unistd.h>

int main(int ac, char **av)
{
    int  i = 0;
    int  j = 0;

    if(ac == 3)
    {
        while(av[1][i] && av[2][j])
        {
            if(av[1][i] == av[2][j])
                i++;
            j++;
        }
        if(av[1][i] == '\0')
        {
            i = 0;
            while(av[1][i])
            {
                write(1,&av[1][i],1);
                i++;
            }
        }
    }
    write(1,"\n",1);
    return (0);
}


//sırayla s1 i s2 de bularak yazdırmaya çalışcak.
//örneğin: s1: "abc" s2: "abpcplea" -> "abc" yazdırır çünkü s1 in tüm karakterleri s2 de sırayla bulunuyor.
//örneğin: s1: "axc" s2: "ahbgdc" -> hiçbir şey yazdırmaz çünkü s1 in karakterleri s2 de sırayla bulun