#if HAVE_CONFIG_H
# include <config.h>
#endif
#include <stdio.h>
#include <foobar/reverse.h>

int main() {
 
    int number = reverse(12345);
    printf("12345 reversed is %d\n", number);

    return 0;
}