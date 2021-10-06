#include "main.h"

/**
* islower - check if a character is lower than an other one
*@c: integer value
* Return: Always 0 (Succes)
*/
int _islower(int c)
{
    if (islower(c))
        return (1);
    else
        return (0);
}
