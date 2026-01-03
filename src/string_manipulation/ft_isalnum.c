#include "libft.h"

int  ft_isalnum(int c)
{
  if ( ft_isalpha(c) || ft_isdigit(c) )
    return 1;
  else
    return 0;
}

#include <stdio.h>
int  main()
{
  printf("%d \n", ft_isalnum('l'));
  printf("%d \n", ft_isalnum('1'));
  printf("%d \n", ft_isalnum('/'));
  return (0);
}
