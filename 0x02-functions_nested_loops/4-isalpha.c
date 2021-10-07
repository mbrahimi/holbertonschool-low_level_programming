#include "main.h"
#include <ctype.h>

/**
* _isalhpa - a function that checks for alphabetic character
*
* @c: single letter input
*
* Return: 1 if c is a letter (lower or uppercase), 0 otherwise
*/
int _isalpha(int c)
{
if (isalpha(c))
return (1);
else
return (0);
}
