#include "main.h"
/**
 * verificationString - String
 * @s: Check string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int verificationString(char *s)
{
	if (*s)
	{
		s++;
		return (verificationString(s) + 1);
	}
	return (0);
}

/**
 * isPalindrome - String is a palindrome
 * @s: Check of string
 * @low: Check low
 * @high: Check high
 * Return: 1 if a string is a palindrome and 0 if not
 */
int isPalindrome(char *s, int low, int high)
{
	if (low >= high)
	{
		return (1);
	}
	if (s[low] == s[high])
	{
		return (isPalindrome(s, low + 1, high - 1));
	}
	return (0);
}
/**
 * is_palindrome - String is a palindrome
 * @s: Cheeck s
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i, j;

	i = verificationString(s);
	j = 0;

	return (isPalindrome(s, j, (i - 1)));
}
