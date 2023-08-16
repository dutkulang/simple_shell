#include "shell.h"

/**
 *_strcmp - compare two strings
 *@first: first string to be used for compasion
 *@second: second string to be compared
 *
 * Return: difference of the two strings
 */

int _strcmp(char *first, char *second)
{
	int x = 0;

	while (first[x] != '\0')
	{
		if (first[x] != second[x])
			break;
		x++;
	}
	return (first[x] - second[x]);
}

/**
 *_strcat - concatenates two strings
 *@destination: string to be concatenated to
 *@source:  string to concatenate
 *
 * Return: address of the new string
 */

char *_strcat(char *destination, char *source)
{
	char *new_string =  NULL;
	int len_dest = _strlen(destination);
	int len_source = _strlen(source);

	new_string = malloc(sizeof(*new_string) * (len_dest + len_source + 1));
	_strcpy(destination, new_string);
	_strcpy(source, new_string + len_dest);
	new_string[len_dest + len_source] = '\0';
	return (new_string);
}

/**
 *_strspn - gets the length of a prefix substring
 *@str1: string to be searched
 *@str2: string to be used
 *
 *Return: number of bytes in the initial segment of 5 which are part of accept
 */

int _strspn(char *str1, char *str2)
{
	int x = 0;
	int match = 0;

	while (str1[x] != '\0')
	{
		if (_strchr(str2, str1[x]) == NULL)
			break;
		match++;
		x++;
	}
	return (match);
}

/**
 *_strcspn - computes segment of str1 which consists of characters not in str2
 *@str1: string to be searched
 *@str2: string to be used
 *
 *Return: index at which a char in str1 exists in str2
 */


int _strcspn(char *str1, char *str2)
{
	int len = 0, x;

	for (x = 0; str1[x] != '\0'; x++)
	{
		if (_strchr(str2, str1[x]) != NULL)
			break;
		len++;
	}
	return (len);
}

/**
 *_strchr - locates a char in a string
 *@s: string to be searched
 *@c: char to be checked
 *
 *Return: pointer to the first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] != c && s[x] != '\0'; x++)
		;
	if (s[x] == c)
		return (s + x);
	else
		return (NULL);
}

