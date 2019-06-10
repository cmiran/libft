/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 17:08:01 by cmiran            #+#    #+#             */
/*   Updated: 2019/06/10 02:39:51 by cmiran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prend en paramètre l’adresse d’une chaine de caractères qui doit être
** libérée avec free(3) et son pointeur mis à NULL.
*/

#include "libft.h"

void	ft_strdel(char **str)
{
//	int	len;
	if (!str)
		return ;
//	printf("i'm in ft_strdel, this is str addr : %p\n", str);
//	len = ft_strlen(*str);
/*	while (len--)
	{
		free(str[len]);
		str[len] = NULL;
		printf("i'm in ft_strdel loop, this is *str addr : %p\n", *str);
	}*/
	free(*str);
	*str = NULL;
//	free(str);
//	str = NULL;
//	printf("i'm in ft_strdel, this is str addr : %p\n", str);
}
