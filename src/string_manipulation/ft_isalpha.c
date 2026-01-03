int  ft_isalpha(int c)
{ 
  if (( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ))
    return 1;
  else
    return 0; 
}

#include <stdio.h>
int  main()
{
  printf("%d \n", ft_isalpha('l'));
  printf("%d \n", ft_isalpha('u'));
  printf("%d \n", ft_isalpha('c'));
  printf("%d \n", ft_isalpha('1'));
  printf("%d \n", ft_isalpha('e'));
  return (0);
}
