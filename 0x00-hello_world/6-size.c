#include <stdio.h>

/**
  * displays the sizes of char, int, long int,
  * long long int, float data types in bytes
  *
  *
  * returns an interger value of 0
  */

int main(void)

{
	

char character;
int integer;
long int longInteger;
long long int longLongInteger;
float Float;

printf("Size of a char: %lu byte(s)\n", sizeof(character));
printf("Size of an int: %lu byte(s)\n", sizeof(integer));
printf("Size of a long int: %lu byte(s)\n", sizeof(longInteger));
printf("Size of a long long int: %lu byte(s)\n", sizeof(longLongInteger));
printf("Size of a float: %lu byte(s)\n", sizeof(Float));
	
return 0;
}
