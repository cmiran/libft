/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiran <cmiran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:25:58 by cmiran            #+#    #+#             */
/*   Updated: 2018/09/05 14:27:46 by cmiran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

nclude "libft.h"

char    *ft_strjoinfree(char const *s1, char const *s2)
{
	size_t    i;
	char    *str;

	if (!s1 || !s2)
		return (NULL);
	if (!(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	i = 0;
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	ft_strdel(&s1);
	ft_strdel(&s2);
	return (str);
}
