#include <unistd.h>

/**
 * display - writes the character c to stdout
 * @character: The charater to print
 *
 * Return: On success 1.
 * On erro, -1 is returned, and errno is set appropriately.
 */

int display(char character)

{

    return (write(1, &character, 1));
}
