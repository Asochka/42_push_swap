/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:53:50 by smana             #+#    #+#             */
/*   Updated: 2022/02/11 15:53:55 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_validity(char *str)
{
	size_t	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i] > 47 && str[i] < 58)
		i++;
	if (ft_strlen(str) == i)
		return (0);
	else
		return (1);
}

int	ft_max_min(char *str)
{
	long	num;
	int		i;

	i = 0;
	num = 0;
	if (ft_strlen(str) < 11 || ((ft_strlen(str) < 12) && (str[0] == '-')))
	{
		if (str[i] == '-')
			i++;
		while (str[i] > 47 && str[i] < 58)
			num = 10 * num + (long)(str[i++] - 48);
		if (str[0] == '-')
			num = -num;
		if (num > 2147483647 || num < -2147483648)
			return (1);
		else
			return (0);
	}
	else
		return (1);
}

void	ft_repeats(int *mass, int k)
{
	int	i;
	int	j;

	if (k < 2)
		exit(EXIT_FAILURE);
	i = 0;
	j = 1;
	while (i < (k - 1))
	{
		while (j < k)
		{
			if (mass[i] == mass[j])
			{
				free(mass);
				ft_print_error();
			}
			j++;
		}
		i++;
	}
}

int	ft_create_number(char *str)
{
	int	num;
	int	i;

	i = 0;
	num = 0;
	if (str[i] == '-')
		i++;
	while (str[i] > 47 && str[i] < 58)
		num = 10 * num + (int)(str[i++] - 48);
	if (str[0] == '-')
		num = -num;
	return (num);
}

char	**ft_devide_sorting(int argc, char **argv, int *count)
{
	int		i;
	char	*str;
	char	*temp;
	char	**mass_str;

	if (argc > 2)
	{
		i = 1;
		str = ft_strjoin(argv[i], argv[i + 1]);
		i = i + 2;
		while (i < argc)
		{
			temp = str;
			str = ft_strjoin(str, argv[i]);
			free(temp);
			i++;
		}
		*count = ft_count01(str, ' ');
		mass_str = ft_split(str, ' ');
		free(str);
		return (mass_str);
	}
	*count = ft_count01(argv[1], ' ');
	return (ft_split(argv[1], ' '));
}
