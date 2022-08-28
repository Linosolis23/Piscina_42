#include <string.h>
#include"ft_strncmp.c"
#include <unistd.h>
#include <stdio.h>
int main(void)
{

   int ret;

    char s1[] = "bbbb";
    char s2[] = "aaaaa";

   ret = ft_strncmp(s1, s2,4);

   if(ret < 0) {
      printf("s1 es menor que s2");
   } else if(ret > 0) {
      printf("s2 es menor que s1");
   } else {
      printf("s1 es igual s2");
   }
   
   return(0);
}