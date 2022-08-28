#include <stdio.h>
#include "ft_str_is_alpha.c"
int    main(void)
{
    int i;
    char cadena[] = "fff@";
    i = ft_str_is_alpha(cadena);
    printf("%d\n", i);
}