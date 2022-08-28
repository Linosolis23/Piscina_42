/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsolis-c <lsolis-c@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:32:56 by lsolis-c          #+#    #+#             */
/*   Updated: 2022/08/19 12:09:43 by lsolis-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	cambiar;
	int	cadena;
	int	i;

	i = 0;
	cadena = size - 1;
	while (i < (size / 2))
	{
		cambiar = tab[i];
		tab[i] = tab[cadena];
		tab[cadena] = cambiar;
		i++;
		cadena--;
	}
}
