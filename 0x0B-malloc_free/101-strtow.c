#include "main.h"

int length(char *str);
int words_counter(char *str);


/**
*strtow - splits a stirng into words
*@str: string to be splitted
*
*Return: pointer to the array of splitted words
*/
char **strtow(char *str)
{
char **split;
int index, j = 0, temp = 0, size = 0, words = words_counter(str);

if (words == 0)
return (NULL);
split = (char **) malloc(sizeof(char *) * (words + 1));
if (split != NULL)
{
for (index = 0; index <= length(str) && words; index++)
{
if ((str[index] != ' ') && (str[index] != '\0'))
size++;
else if (((str[index] == ' ') || (str[index] == '\0'))
&& index && (str[index - 1] != ' '))
{
split[j] = (char *) malloc(sizeof(char) * size + 1);
if (split[j] != NULL)
{
while (temp < size)
{
split[j][temp] = str[(index - size) +temp];
temp++;
}
split[j][temp] = '\0';
size = temp = 0;
j++;
}
else
{
while (j-- >= 0)
free(split[j]);
free(split);
return (NULL);
}
}
}
split[words] = NULL;
return (split);
}
else
return (NULL);
}


/**
* words_counter - counts the number of words in str
*@str: string to be used
*
*Return: number of words
*/
int words_counter(char *str)
{
int index = 0, words = 0;

while (index <= length(str))
{
if ((str[index] != ' ') && (str[index] != '\0'))
{
index++;
}
else if (((str[index] == ' ') || (str[index] == '\0')) &&
index && (str[index - 1] != ' '))
{
words += 1;
index++;
}
else
{
index++;
}
}
return (words);
}

/**
* length - returns length of str
*@str: string to be counted
*
* Return: length of the string
*/

int length(char *str)
{
int length = 0;

if (str != NULL)
{
while (str[length])
length++;
}
return (length);
}
