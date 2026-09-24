/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 16:08:35 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/24 16:13:32 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char b);

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
