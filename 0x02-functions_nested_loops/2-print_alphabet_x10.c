#include "main.h"

/**
 * print alphabates 10 times crazy right
 * thats makes 2 of us then hahAHAHA
 */

void printalphabetx10(void)
{

  int j;
  int x;

  for(x = 0; x < 10; x++)
    {
      for(j = 'a'; j <='z'; j++)
	{
	  _putchar(j);
	}
      _putchar('/n')
    }
}
