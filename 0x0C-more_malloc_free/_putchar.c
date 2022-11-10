#include <unistd.h>
#include <stdio.h>

/**
* _putchar - writes the character c to stdout
* @character: The charater to print
*
* Return: On success 1.
* On erro, -1 is returned, and errno is set appropriately.
*/
int _putchar(char character)

{

return (write(1, &character, 1));
}
