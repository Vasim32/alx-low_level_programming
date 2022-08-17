#include 'variadic_functions.h'

/**
*
*
*
*/

int sum_them_all(const unsigned int n, ...)
{
  unsigned int i;
  int sum;
  va_list valist;

  va_start(valist, n);

  if (n==0)
    return(0);
  for(i = 0, i < n, i++)
    sum += varg(valist,int);
  va_end(valist);

  return (sum);
}
