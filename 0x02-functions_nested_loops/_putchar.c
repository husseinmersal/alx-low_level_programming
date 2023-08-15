#include<unistd.h>
/**
 *
 *
 * _putchar write a program that returns new line 
 * Return : on Success 0
 * */
int  _putchar(char c)
{
	return (write(1, &c, 1));
}
