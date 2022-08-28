#include <stdio.h>
#include "ft_str_is_uppercase.c"
int    main(void)
{
    int i;
    char cadena[] = "DD1";
    i = ft_str_is_uppercase(cadena);
    printf("%d\n", i);
}