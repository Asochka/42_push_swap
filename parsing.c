#include "header.h"

int	ft_validity(char *str)
{
	int	i;

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
		else return (0);
	}
	else return (1);
}

void	ft_repeats(int *mass, int k)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < k - 2)
	{
		while (j <  k - 1)
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

int	main(int argc, char **argv)
{
	int	i;
	int	*arr;

	i = 1;
	if (argc < 3)
		ft_print_error();
	arr = (int *)malloc((argc - 1) * sizeof(int));
	if (!arr)
		return (0);
	while (i < argc)
	{
		if (!(ft_validity(argv[i])) && !(ft_max_min(argv[i])))
			arr[i - 1] = ft_create_number(argv[i]);
		else 
		{
			free(arr);
			ft_print_error();
		}
		i++;
	}
	ft_repeats(arr, argc);
	ft_two_arrays(arr, argc);
}