#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the charactyer to print
 *
 * Return: On success 1
 */
int _putchar(cahr c)
{
	return (write(1, &c, 1));
}
