#include <stdio.h>
#include "ft_str_is_numeric.c"
int    main(void)
{
    int i;
    char cadena[] = "000!00";
    i = ft_str_is_numeric(cadena);
    printf("%d\n", i);
}