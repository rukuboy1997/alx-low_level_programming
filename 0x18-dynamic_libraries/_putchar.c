#include "main.h"
#include <unistd.h>

/**
 * This is a function that outputs characters
 * Returns 0
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
