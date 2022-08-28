
#include"ft_ultimate_div_mod.c"
#include <stdio.h>

int main(void)
{
	int		a=10;
	int		b=5;

	ft_ultimate_div_mod(&a,&b);
	printf("div = %d\n",a);
	printf("mod = %d\n",b);
}
