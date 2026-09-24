/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:55:46 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/23 19:13:23 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	if (nb > 0)
	{
		i = 1;
		while (i <= nb)
		{
			result = 1;
			result = i * i;
			if (result == nb)
				return (i);
			i++;
		}
	}
	else
		return (0);
	return (0);
}

/* #include <unistd.h>

void	ft_putnbr(int num)
{
	char	digit;

	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
		ft_putnbr(num);
	}
	else
	{
		digit = (num % 10) + 48;
		if (num / 10 != 0)
			ft_putnbr((num / 10));
		write(1, &digit, 1);
	}
}

int	main(void)
{
	ft_putnbr(ft_sqrt(144));
	return (0);
} */
