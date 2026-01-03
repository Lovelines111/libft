#include <string.h>
size_t ft_strlen(const char *str)
{
  int i = 0;

  while (str[i] != 0)
  {
    ++i;
  }
  return (i);
}

// #include <stdio.h>
// int main()
// {
//   printf("%ld \n", ft_strlen("I'm a cute girl 0.0"));
//   return 0;
// }
