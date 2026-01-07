
char    *ft_strrev(char *str)
{
    int     i;
    int     len;
    char    temp;

    i = 0;
    len = 0;

    while (str[len])
        len++;
    
    while (i < len / 2)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
        i++;
    }
    return (str);
}




//amaç stringi tersten yazdırmak. , örneğin "hello" -> "olleh"
//başlangıç ve son karakterleri yer değiştirip ortada buluşana kadar devam ettiriyor.
//örneğin "hello" için:
//1. adım: 'h' ve 'o' yer değiştirir -> "
//2. adım: 'e' ve 'l' yer değiştirir -> "oll eh"
//3. adım: ortada buluşur, işlem biter -> "olleh"
//sonuç olarak string tersten yazılmış olur.





