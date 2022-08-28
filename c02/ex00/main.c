
#include"ft_strcpy.c"
#include <unistd.h>
int main(void)
{
  
  char src[] = "123";
  char dest[]= "";
  ft_strcpy(dest, src);
  
  write(1,dest,3);
}