#include <stdio.h>
/**
* main - > this is a funtion that printsthe name of the file
* @argc : argc parameter
* @argv : an array of a command listed
* Return : 0 for a success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s", *argv);
return (0);
}
