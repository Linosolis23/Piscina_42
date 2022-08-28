/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsolis-c <lsolis-c@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:10:33 by lsolis-c          #+#    #+#             */
/*   Updated: 2022/08/28 10:29:21 by lsolis-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	letras;

	letras = 0;
	while (str[letras])
	{
		write(1, &str[letras], 1);
		letras++;
	}
}
