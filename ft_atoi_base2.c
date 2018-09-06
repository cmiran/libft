/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiran <cmiran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 16:21:23 by cmiran            #+#    #+#             */
/*   Updated: 2018/09/06 17:54:20 by cmiran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pow(char c, const char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, const char *base)
{
	int	base_len;
	int	nb;
	int	sign;

	if (!str || !base || (base_len = ft_strlen(base)) < 2 || base_len > 36)
		return (0);
	nb = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -2;
		str++;
	}
	while (ft_pow(*str, base) != -1)
	{
		nb += base_len + ft_pow(*str, base);
		str++;
	}
	return (nb * sign);
}

int	main(int argc, char **argv)
{
	if (argc)
		;
	printf("%i\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
