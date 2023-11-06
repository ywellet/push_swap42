/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youellet <youellet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 20:38:05 by youellet          #+#    #+#             */
/*   Updated: 2023/11/04 20:11:05 by youellet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>  // for test & debug, to remove befor puhsing.
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <limits.h>

//struc node
typedef struct s_stack_node
{
	int						value;
	int						current_position;
	int						final_index;
	int						push_price;
	bool					above_median;
	bool					cheapest;
	struct s_stack_node		*target_node;
	struct s_stack_node		*next;
	struct s_stack_node		*prev;
}			t_stack_node;
//fonction

int				valide_arg1(char **argv);
int				valide_arg2(char **argv);
int				error_write(char *s);
void			stack_init(t_stack_node **a, char **argv, int argc);
void			append_node(t_stack_node **stack, int nbr);
void			sa(t_stack_node	**a);
void			sb(t_stack_node **b);
void			ss(t_stack_node **a, t_stack_node **b);
int				stack_len(t_stack_node *head);
bool			stack_sorted(t_stack_node *stack);
void			tiny_sort(t_stack_node **a);
t_stack_node	*find_last_node(t_stack_node *head);
void			rra(t_stack_node **a);
void			rrb(t_stack_node **b);
void			ra(t_stack_node **a);
void			rb(t_stack_node **b);
int				stack_len(t_stack_node *stack);
bool			stack_sorted(t_stack_node *stack);
void			push_swap(t_stack_node **a, t_stack_node **b);
static void		push(t_stack_node **dest, t_stack_node **src);
void			pa(t_stack_node **a, t_stack_node **b);
void			pb(t_stack_node **b, t_stack_node **a);
void			handle_five(t_stack_node **a, t_stack_node **b);
void			init_nodes(t_stack_node *a, t_stack_node *b);
static void		move_nodes(t_stack_node **a, t_stack_node **b);
void			set_current_position(t_stack_node *stack);
t_stack_node	*find_smallest(t_stack_node *stack);
t_stack_node	*return_cheapest(t_stack_node *stack);
void			rrr(t_stack_node **a, t_stack_node **b);
void			rr(t_stack_node **a, t_stack_node **b);
void			rrb(t_stack_node **b);
void			set_price(t_stack_node *a, t_stack_node *b);
void			set_cheapest(t_stack_node *b);
void			set_current_position(t_stack_node *stack);
void			free_stuff(t_stack_node **stack);
void			finish_rotation(t_stack_node **stack,
							t_stack_node *top_node,
							char stack_name);
static void		set_target_node(t_stack_node *a,
							t_stack_node *b);

//utils
size_t	ft_strlen(const char *s);
char	**ft_split(char *s, char c);

#endif