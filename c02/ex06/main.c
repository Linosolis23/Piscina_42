#include <stdio.h>
#include "ft_str_is_printable.c"
int    main(void)
{
    int i;
    char cadena[] = "ffff44";
    i = ft_str_is_printable(cadena);
    printf("%d\n", i);
}