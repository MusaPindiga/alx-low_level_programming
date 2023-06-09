#include "main.h"

int find_strlen(char *str);
int check_palindrome(char *str, int len, int index);
int is_palindrome(char *str);

/**
 * find_strlen - Returns the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *str)
{
	int len = 0;

	if (*(str + len))
	{
		len++;
		len += find_strlen(str + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @str: The string to be checked.
 * @len: The length of str.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check_palindrome(char *str, int len, int index)
{
	if (str[index] == str[len / 2])
		return (1);

	if (str[index] == str[len - index - 1])
		return (check_palindrome(str, len, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @str: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *str)
{
	int index = 0;
	int len = find_strlen(str);

	if (!(*str))
		return (1);

	return (check_palindrome(str, len, index));
}
