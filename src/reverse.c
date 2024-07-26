#if HAVE_CONFIG_H
# include <config.h>
#endif

#include <foobar/reverse.h>

int reverse(int number) 
{
    int reverse = 0, remainder;
    while(number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }

    return reverse;
}