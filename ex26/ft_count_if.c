/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 20:38:27 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/24 21:15:13 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	if (!tab || !f)
		return (0);
	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

/*
int	is_capital(char *str)
{
	if (str && str[0] >= 'A' && str[0] <= 'Z')
		return (1);
	return (0);
}

int	main(void)
{
	char *array[] = {
		"Manzana",
		"Café",
		"Gato",
		"Perro",
		"Jirafa",
		NULL
	};

	int result = ft_count_if(array, &is_capital);

	printf("Número de cadenas que comienzan con una letra mayúscula: %d\n", result);
	printf("Resultado esperado: 3\n");
	return (0);
}*/