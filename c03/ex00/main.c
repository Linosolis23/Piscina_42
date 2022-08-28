#include <string.h>
#include"ft_strcmp.c"
#include <unistd.h>
#include <stdio.h>
int main(void)
{

   int ret;

    char s1[] = "gfz";
    char s2[] = "zfz";

   ret = strcmp(s1, s2);

   if(ret < 0) {
      printf("s1 es menor que s2");
   } else if(ret > 0) {
      printf("s2 es menor que s1");
   } else {
      printf("s1 es igual s2");
   }
   
   return(0);
}