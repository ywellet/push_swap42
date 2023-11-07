/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youellet <youellet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:08:41 by youellet          #+#    #+#             */
/*   Updated: 2023/11/06 20:29:01 by youellet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	error_write(char *s)
{
	int	i;

	i = 0;
	i = ft_strlen(s);
	write(2, s, i);
	exit(1);
}

void	free_stuff(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*current;

	if (NULL == stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

bool	is_number(const char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	if (!*str)
		return (false);
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (false);
		str++;
	}
	return (true);
}

bool	has_duplicate(t_stack_node *a, long nbr)
{
	while (a)
	{
		if (a->value == nbr)
			return (true);
		a = a->next;
	}
	return (false);
}
