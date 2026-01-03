int  ft_isprint(int c)
{
  if ( c >= 32 && c <= 126 )
    return 1;
  else
    return 0;
}

// #include <stdio.h>
// int main()
// {
//   printf("%d \n", ft_isprint(15));
//   printf("%d \n", ft_isprint(67));
//   printf("%d \n", ft_isprint(127));
//   return (0);
// }
