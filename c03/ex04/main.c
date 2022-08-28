#include "ft_strstr.c"
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[50] = "hola que tal buenas tardes";
	char to_find[] = "que";

	char *ret;
	ret = ft_strstr(str, to_find);

	printf("%s", ret);
}