#include"ft_strncat.c"
#include<stdio.h>
int main(void)
{

    char src[20] = "hola";
    char dest[] = "que tal como estas";

	printf("%s\n%s\n", src, dest);
	ft_strncat(src, dest,2);

	printf("%s", src);
}