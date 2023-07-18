#include <unistd.h>
 /**
  *_ putchar - Entry point
  * Return - printed characters
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
