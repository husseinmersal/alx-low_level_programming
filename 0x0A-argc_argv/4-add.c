#include <stdio.h>
#include <stdlib.h>
/**
 * a program that adds positive numbers.
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
 * You can assume that numbers and the addition of all the numbers can be stored in an int
 */
int main(int argc , char *argv[])
{
	int sum = 0;
	char *c;
	while(--argc)
	{
		for(c = argv[argc]; *c; c++)
		{
		
			if(*c < '0' || *c > '9')
			
				return (printf("error\n"), 1);
			sum += atoi(argv[argc]);
		}
	}
	printf("%d",sum);
	return 0;
}
       
