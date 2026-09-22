/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 16:08:35 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/22 19:46:12 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char b)
{
	write(1, &b, 1);
}

void	ft_print_alphabet(void)
{
	char	i;

	i = 96;
	while (i++ < 122)
	{
		ft_putchar(i);
	}
}

/* int	main(void)
{
	ft_print_alphabet();
	return (0);
} */
