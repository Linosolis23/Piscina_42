
#include"ft_rev_int_tab.c"
#include <stdio.h>


void recorrer(int arr[], int size)
{
	for (int i = 0; i < (size -1); i++)
    printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
	
}

int		main (void)
{
	int tab[] = {1, 2, 3, 4};
	int size= 4;
	
	printf("Antes: ");
	recorrer(tab, size);

	ft_rev_int_tab(tab, size);

	printf("Despues: ");
	recorrer(tab, size);
}
