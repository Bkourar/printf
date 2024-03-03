/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_a_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:53:25 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/03 22:18:51 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	 pa(t_node **list_a, t_node **list_b, int fd)
{
	t_node	*temp;
	t_node	*head;

	head = (*list_b)->next;
	temp = (*list_b);
	temp->next = (*list_a);
	(*list_a) = temp;
	(*list_b) = head;
	config_postion(list_a);
	config_postion(list_b);
	if (fd == 1)
		write(1, "pa\n", 3);
}

void	 sa(t_node **lst, int fd)
{
	t_node	*temp;

	if (!lst || !(*lst) || !(*lst)->next)
		return ;
	temp = (*lst);
	(*lst) = (*lst)->next;
	(temp)->next = (*lst)->next;
	(*lst)->next = temp;
	config_postion(lst);
	if (fd == 1)
		write(1, "sa\n", 3);
}

void	ra(t_node **lst, int fd)
{
	t_node	*temp;
	t_node	*swp;

	if (!lst || !(*lst) || !(*lst)->next)
		return ;
	swp = (*lst);
	(*lst) = (*lst)->next;
	temp = (*lst)->next;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = swp;
	swp->next = NULL;
	config_postion(lst);
	if (fd == 1)
		write(1, "ra\n", 3);
}

void	 rra(t_node **lst, int fd)
{
	t_node	*temp;
	t_node	*swp;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	temp = (*lst);
	while (temp->next->next != NULL)
		temp = temp->next;
	swp = temp;
	temp = temp->next;
	temp->next = (*lst);
	(*lst) = temp;
	swp->next = NULL;
	config_postion(lst);
	if (fd == 1)
		write(1, "rra\n", 4);
}
