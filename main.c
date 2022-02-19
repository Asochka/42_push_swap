/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:54:05 by smana             #+#    #+#             */
/*   Updated: 2022/02/11 15:54:07 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_count01(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] != '\0' && s[i] == c)
				i++;
			continue ;
		}
		i++;
		if (s[i] == '\0')
			count++;
	}
	return (count);
}

void	ft_clean_mass_str(char **mass_str)
{
	int	i;

	i = 0;
	if (mass_str)
	{
		while (mass_str[i])
			free(mass_str[i++]);
		free(mass_str);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		*arr;
	char	**mass_str;
	int		count;

	i = 0;
	count = 0;
	arr = (int *)malloc((argc - 1) * sizeof(int));
	if (!arr)
		return (0);
	mass_str = ft_devide_sorting(argc, argv, &count);
	while (i < count)
	{
		if (!(ft_validity(mass_str[i])) && !(ft_max_min(mass_str[i])))
			arr[i] = ft_create_number(mass_str[i]);
		else
		{
			ft_clean_mass_str(mass_str);
			free(arr);
			ft_print_error();
		}
		i++;
	}
	ft_clean_mass_str(mass_str);
	ft_repeats(arr, count);
	ft_two_arrays(arr, count + 1);
}