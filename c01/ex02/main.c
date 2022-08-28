
#include"ft_swap.c"
#include <stdio.h>

int main(void)
{
	int		a=2;
	int		b=5;
	int		*ptra;
	int		*ptrb;

	ptra = &a;
	ptrb = &b;
	printf("antes del swap a es %d, b es %d\n", a, b);
	ft_swap(ptra, ptrb);
	printf("despues del swap a es %d, b es %d", a, b);
}
