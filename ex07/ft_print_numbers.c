/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 16:08:35 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/22 19:46:07 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char b)
{
	write(1, &b, 1);
}

void	ft_print_alphabet(void)
{
	char	num;

	num = 47;
	while (num++ < 57)
	{
		ft_putchar(num);
	}
}

/* int	main(void)
{
	ft_print_alphabet();
	return (0);
} */
