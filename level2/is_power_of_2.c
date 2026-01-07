//#include <unistd.h>


int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);
    return ((n & (n - 1)) == 0);
}




#include <stdio.h>


int main(void)
{
    printf("Testing is_power_of_2:\n\n");
    
    // 2'nin kuvvetleri (1 dönmeli)
    printf("Powers of 2 (should return 1):\n");
    printf("is_power_of_2(1) = %d\n", is_power_of_2(1));
    printf("is_power_of_2(2) = %d\n", is_power_of_2(2));
    printf("is_power_of_2(4) = %d\n", is_power_of_2(4));
    printf("is_power_of_2(8) = %d\n", is_power_of_2(8));
    printf("is_power_of_2(16) = %d\n", is_power_of_2(16));
    printf("is_power_of_2(32) = %d\n", is_power_of_2(32));
    printf("is_power_of_2(64) = %d\n", is_power_of_2(64));
    printf("is_power_of_2(128) = %d\n", is_power_of_2(128));
    printf("is_power_of_2(1024) = %d\n", is_power_of_2(1024));
    
    printf("\nNot powers of 2 (should return 0):\n");
    printf("is_power_of_2(0) = %d\n", is_power_of_2(0));
    printf("is_power_of_2(3) = %d\n", is_power_of_2(3));
    printf("is_power_of_2(5) = %d\n", is_power_of_2(5));
    printf("is_power_of_2(6) = %d\n", is_power_of_2(6));
    printf("is_power_of_2(7) = %d\n", is_power_of_2(7));
    printf("is_power_of_2(10) = %d\n", is_power_of_2(10));
    printf("is_power_of_2(15) = %d\n", is_power_of_2(15));
    printf("is_power_of_2(100) = %d\n", is_power_of_2(100));
    printf("is_power_of_2(1000) = %d\n", is_power_of_2(1000));
    
    return (0);
}