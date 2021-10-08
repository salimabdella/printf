#include "main.h"


int printbin(char *format, va_list pa)
{
    unsigned int num = va_arg(pa, unsigned int);
    static char bits[7] = {'0','0','0','0','0','0','0'};
    int index = 6;

    (void)format;

    while (num > 0)
    {
        bits[index--] = (num & 1) + '0';
        num = (num >> 1);
    }

    for (index = 0; index <= 6; index++)
        _putchar(bits[index]);

    return (index);
}
