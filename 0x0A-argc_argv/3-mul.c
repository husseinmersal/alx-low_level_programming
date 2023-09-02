#include <stdio.h>
#include <stdlib.h>
/*
 * a program that multiplies two numbers.
 * Your program should print the result of the multiplication, followed by a new line
 * You can assume that the two numbers and result of the multiplication can be stored in an integer
 *If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
 */
int main(int argc , char *argv[])
{
	int sum;
	if(argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n",sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return 0;
}

