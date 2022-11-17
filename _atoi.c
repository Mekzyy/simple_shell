#include "shell.h"

/**
<<<<<<< HEAD
 * interactive - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to input
 * Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
=======
 * _atoi - converts string to number
 * @s : pointer int
 * _atoi: converts string to number
 * Return: The result (converted number)
>>>>>>> eb69b644c214ef930aeaefe7dc1d9976a38e06dd
 */

int _atoi(char *s)
{
<<<<<<< HEAD
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
=======
	int i;
	int check_num;
	unsigned int sum;
	unsigned int x;
	int neg;

	neg = 0;
	check_num = 0;
	sum = 0;
	i = 0;

	/* run a while loop */
	while (s[i] != '\0')
	{
		if ((s[i] > '9' || s[i] < '0') && check_num > 0)
			break;
		if (s[i] == '-')
			neg++;
		if (s[i] >= '0' && s[i] <= '9')
			check_num++;
		i++;
	}
	i = i - 1;
	x = 1;
	while (check_num > 0)
	{
		sum = sum + ((s[i] - '0') * x);
		x = x * 10;
		i--;
		check_num--;
	}
	if (neg % 2 != 0)
		sum = sum * -1;
	return (sum);
>>>>>>> eb69b644c214ef930aeaefe7dc1d9976a38e06dd
}
