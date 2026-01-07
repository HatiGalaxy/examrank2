int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int result = 0;
    int sign = 1;
    int digit;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
   
    
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }

    while(str[i])
    {

        if(str[i] >= '0' && str[i] <= '9')
            digit = str[i]  -'0';
        else if(str[i] >= 'a' && str[i] <= 'f')
            digit = str[i] - 'a' + 10;
        else if(str[i] >= 'A' && str[i] <= 'F')
            digit = str[i] - 'A' + 10;
        else
            break;


        if(str_base <= digit)
        {
            break;
        }



    
   
        result = result  * str_base + digit;
        i++;
    }

    return(result * sign);
    


}


#include <stdio.h>

int main(void)
{
    printf("Test 1: \"10\" (base 10) = %d\n", ft_atoi_base("10", 10));
    printf("Test 2: \"101\" (base 2) = %d\n", ft_atoi_base("101", 2));
    printf("Test 3: \"ff\" (base 16) = %d\n", ft_atoi_base("ff", 16));
    printf("Test 4: \"12\" (base 8) = %d\n", ft_atoi_base("12", 8));
    printf("Test 5: \"-2a\" (base 16) = %d\n", ft_atoi_base("-2a", 16));
    
    return (0);
}