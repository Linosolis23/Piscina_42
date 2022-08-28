#include"ft_strcat.c"
#include<stdio.h>
int main(void)
{

    char src[20] = "hola";
    char dest[] = "que";

	printf("%s\n%s\n", src, dest);
	ft_strcat(src, dest);

	printf("%s", src);
}