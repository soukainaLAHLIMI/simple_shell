#include "shell.h"

/**
 * interactive
 * @info
 *
 * Return
 */

int interactive(info_t*info)
{
	return (isatty(STDIN_FILENO)&&info->readfd <=2);
}

/**
 * is_delim
 * @c
 * @delim
 * Return 
 */

int is_delim(char c, char *delim)
{
	while(*delim)
		if(*delim++ == c)
			return(1);
	return(0);
}

/**
 * _isalpha
 * @c
 * Return
 */

int _isalpha(int c)
{
	if((c >='a' && c <= 'z') || (c >= 'A' && c<='Z'))
		return(1);
	else
		return(0);
}

/**
 * _atoi
 * @s
 * Return
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag !=2; i++)
	{
		if(s[i] == '-')
			sign *= -1;

		if (s[i]>= '0' && s[i]<='9')
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
}




