/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:42:50 by cesar             #+#    #+#             */
/*   Updated: 2023/11/21 17:36:06 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*n_ret;
	void	*ret_content;

	if (!lst || !f)
		return (NULL);
	ret = NULL;
	while (lst != NULL)
	{
		ret_content = f(lst->content);
		n_ret = ft_lstnew(ret_content);
		if (!n_ret)
		{
			del(ret_content);
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, n_ret);
		lst = lst->next;
	}
	return (ret);
}
