#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
long longType;
long long longType;
char charType;

printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of double: %zu bytes\n", sizeof(longType));
printf("Size of double: %zu bytes\n", sizeof(longlongsType));
printf("Size of char: %zu byte\n", sizeof(charType));
return (0);
}
