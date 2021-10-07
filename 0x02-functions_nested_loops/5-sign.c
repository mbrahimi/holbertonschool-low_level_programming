#include "main.h"
#include <ctype.h>

/**
* print_sign (int n) - check the code
*
* Return: can change when n is differant
*/
int print_sign(int n);
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
