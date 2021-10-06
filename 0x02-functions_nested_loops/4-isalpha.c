#include "main.h"
#include <ctype.h>

/**
*_isalhpa - if c is a letter, lowercase or uppercase
*@c: integer value
* Return: 0 or 1
*/
int _isalpha(int c)
{
if (isalpha(c))
return (1);
else
return (0);
}
