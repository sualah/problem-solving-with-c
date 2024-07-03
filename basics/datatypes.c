#include <stdio.h>
#include <limits.h>

int main ()
{
    int max_int = INT_MAX;
    int min_int = INT_MIN;
    unsigned un_int_max = UINT_MAX;
    unsigned un_int_min = 1;
    char c = 127;

    printf("Maximum int on this machine is: %d and minimum is: %d \n", max_int, min_int);

    printf("range of unsigned int is from: %u to : %u\n", un_int_min, un_int_max);

    /* exceeding max range*/
    printf("exceeded max int: %d\n", max_int + 1);
    printf("exceeded min int: %d\n", min_int - 1);

    printf("%c\n", c);


    printf("%d", printf("%s", "hello world"));

}