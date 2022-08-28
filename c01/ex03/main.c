
#include"ft_div_mod.c"
#include <stdio.h>

int main(void)
{
	int		a=10;
	int		b=5;
	int		div;
	int		mod;

	ft_div_mod(a,b,&div,&mod);
	printf("div de %d y %d es %d\n" ,a,b,div);
	printf("mod de %d y %d es %d\n" ,a,b,mod);
}
