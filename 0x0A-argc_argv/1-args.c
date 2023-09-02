#include <stdio.h>
/**
 *  program that prints its name, followed by a new line.
 *  If you rename the program, it will print the new name, without having to compile it again
 *   should not remove the path before the name of the program
 */
int main(int argc ,char *argv[] __attribute__((unused)))
{
printf("%d\n",argc -1);
return 0;
}
