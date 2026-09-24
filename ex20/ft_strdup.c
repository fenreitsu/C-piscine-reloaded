/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:24:19 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/24 14:42:28 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* char *ft_strdup(char *src)
{
	char *dup;

	dup = malloc((ft_strlen(src) + 1) * sizeof(char))
} */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str2[i])
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

char	*ft_strdup(char *src)
{
	int		str_len;
	char	*str_dup;

	if (src == NULL)
		return (NULL);
	else
	{
		str_len = ft_strlen(src);
		str_dup = malloc(str_len + 1);
		str_dup = ft_strcpy(str_dup, src);
		return (str_dup);
	}
}

/* #include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_putstr(ft_strdup(argv[1]));
	else if (argc <= 1)
		ft_putstr("\nNo se ha especificados argumentos\n");
	else
		return (0);
} */
