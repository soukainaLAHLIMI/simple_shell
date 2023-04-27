#include "shell.h"

/**
 * _eputs
 * @str
 * Return
 *
 */

void _eputs(char *str)
{
	int i = 0;
	if(!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar
 * @c
 * Return
 * On error
 */

int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2,buf,i);
		i= 0;

	}
	if(c != BUF_FLUSH)
		buf[i++] = c;
	return(1);
}

/**
 * _putfd
 * @c
 * @fd
 * Return
 * On error
 */

int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if(c != BUF_FLUSH)
		buf[i++] = c;
	return(1);
}

/**
 * _putsfd
 * @str
 * @fd
 * Return
 *
 */

int _putsfd(char *str, int fd)
{
	int i = 0;
	if(!str)
		return(0);
	while (*str)
	{
		i+= _putfd(*str++, fd);
	}
		return(i);
}






































