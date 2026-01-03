int ft_isdigit(int c)
{
  if ( c >= '0' && c <= '9' )
    return 1;
  else
    return 0;
}

#include <stdio.h>
int  main()
{
  printf("%d \n", ft_isdigit('l'));
  printf("%d \n", ft_isdigit('1'));
  return (0);
}

