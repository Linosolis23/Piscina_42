
#include"ft_strncpy.c"
#include <unistd.h>
int main(void)
{
  
  char src[] = "hola";
  char dest[]= "buenas tardes";

  ft_strncpy(dest, src,3);
  
  printf("%s",dest);
}