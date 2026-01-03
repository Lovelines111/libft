#include <stddef.h>
char *ft_strchr(const char *hrt, int c)
{
  while (*hrt != '\0')
  {
    // Check if the current character matches 'c'
    if (*hrt == (unsigned char)c)
      return((char*)hrt);
    hrt++; // move the pointer to the next character.
  }

  // after the loop the code is at \0.
  // it checks one last time: did the user want \0?
  if ((unsigned char)c == '\0')
    return((char *)hrt);

  return (NULL);
}

#include <stdio.h>
int main(void)
{
  printf ("%s \n", ft_strchr("hello I like 42", 'I') );
  return(0);
}
