#include <stdio.h>
#include "ft_str_is_lowercase.c"
int    main(void)
{
    int i;
    char cadena[] = "ffff\n";
    i = ft_str_is_lowercase(cadena);
    printf("%d\n", i);
}