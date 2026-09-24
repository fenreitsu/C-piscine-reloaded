/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 16:08:35 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/24 21:29:21 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char b);

void	ft_print_numbers(void)
{
	char	num;

	num = 47;
	while (num++ < 57)
		ft_putchar(num);
}

/* int	main(void)
{
	ft_print_alphabet();
	return (0);
} */
