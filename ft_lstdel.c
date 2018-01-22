/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 17:37:38 by cmiran            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/01/22 14:54:03 by cmiran           ###   ########.fr       */
=======
/*   Updated: 2018/01/22 17:47:53 by cmiran           ###   ########.fr       */
>>>>>>> 71a9c79bc3e0977a00de8fe5533b82554503d7c7
/*                                                                            */
/* ************************************************************************** */

/*
** Prend en paramètre l’adresse d’un pointeur sur un maillon et libère la
** mémoire de ce maillon et celle de tous ses successeurs l’un après l’autre
** avec del et free(3). Pour terminer, le pointeur sur le premier maillon
** maintenant libéré doit être mis à NULL (de manière similaire à la
** fonction ft_memdel de la partie obligatoire).
*/

#include "libft.h"

/*
** void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
** {
** 	t_list	*list;
** 	t_list	*next;
**
** 	if (!alst)
** 		return ;
** 	list = *alst;
** 	while (list)
** 	{
** 		next = list->next;
** 		ft_lstdelone(&list, del);
** 		list = next;
** 	}
** 	*alst = NULL;
** }
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if ((*alst)->next)
		ft_lstdel(&(*alst)->next, del);
	printf("2\n");
	ft_lstdelone(alst, del);
}
