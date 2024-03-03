/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:28:10 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/03 23:11:00 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int  check_stack_sort(t_node **stack_is_sort)
{
	t_node	*head;
	t_node	*temp;

	head = (*stack_is_sort);
	temp = (*stack_is_sort)->next;
	while (temp != NULL)
	{
		if (head->data > temp->data)
			return (0);
		head = head->next;
		temp = temp->next;
	}
	return (1);
}

static char	*container_of_av(char **av1, int ac1)
{
	char	*all_av1;
	int		i;

	all_av1 = ft_strdup("");
	if (!all_av1)
		return (NULL);
	if (ac1 > 1)
	{
		i = 0;
		while (++i < ac1)
		{
			all_av1 = ft_strjoin(all_av1, av1[i]);
			if (!all_av1)
				return (free(all_av1), NULL);
		}
	}
	return (all_av1);
}

static int  option_of_sorting(t_node **a, t_node **b, char **format)
{
    if (!ft_strcmp(*format, "pa\n"))
        pa(a, b, -1);
    else if (!ft_strcmp(*format, "pb\n"))
        pb(a, b, -1);
    else if (!ft_strcmp(*format, "sa\n"))
        sa(a, -1);
    else if (!ft_strcmp(*format, "sb\n"))
        sb(b, -1);
    else if (!ft_strcmp(*format, "ss\n"))
        ss(a, b, -1);
    else if (!ft_strcmp(*format, "ra\n"))
        ra(a, -1);
    else if (!ft_strcmp(*format, "rb\n"))
        rb(b, -1);
    else if (!ft_strcmp(*format, "rr\n"))
        rr(a, b, -1);
    else if (!ft_strcmp(*format, "rra\n"))
        rra(a, -1);
    else if (!ft_strcmp(*format, "rrb\n"))
        rrb(b, -1);
    else if (!ft_strcmp(*format, "rrr\n"))
        rrr(a, b, -1);
    if (!check_stack_sort(a))
        return (0);
    return (1);
}

static void verfier(t_node **st1, t_node **st2)
{
    char  *read;
    while (1)
    {
        read = get_next_line(0);
        if (!read)
            return ;
		    option_of_sorting(st1, st2, &read);
    }
}

int	main(int ac, char **av)
{
	char	*all_av;
	int		*intgers;
	t_node	*stack_a;
	t_node	*stack_b;

	if (ac > 1)
	{
		all_av = container_of_av(av, ac);
		if (!all_av)
			return (write(1, "error\n", 6), 1);
		intgers = convert(&all_av, count_word(all_av));
		if (!intgers)
			return (write(1, "error\n", 6), 1);
		stack_a = create_stack(&intgers, count_word(all_av));
		if (!stack_a)
			return (free_stack(&stack_a), 1);
		(free(all_av), all_av = NULL, stack_b = NULL);
        verfier (&stack_a, &stack_b);
        if (!check_stack_sort(&stack_a))
        write(1, "KO\n", 3);
        else
        write(1, "OK\n", 3);
        free(intgers);
	}
	return (0);
}
