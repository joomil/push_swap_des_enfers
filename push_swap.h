/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:30:27 by jmilesi           #+#    #+#             */
/*   Updated: 2023/08/03 17:01:51 by jmilesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct s_pwlist
{
	int		element;
	int		index;
	t_pwlist	*next;
}	t_pwlist;

typedef struct s_element
{
	int	next;
	int	previous;
	int	min;
	int	max;
	int	med;
}	t_element;

typedef struct s_stack;
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size_a;
	int		size_b;
}	t_stack;

#endif