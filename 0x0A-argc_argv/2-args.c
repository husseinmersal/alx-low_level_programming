#include <stdio.h>
/**
 *  program that prints all arguments it receives.
 *  all arguments should be printed, including the first one
 *  Only print one argument per line, ending with a new line
 */

int main(int argc , char *argv[])
{
	int i =0;
	while(argc--)
	{
		printf("%s\n",argv[i]);
		i++;
	}
	return 0;
}
