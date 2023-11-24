/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:44:12 by jmilesi           #+#    #+#             */
/*   Updated: 2023/11/24 11:45:21 by jmilesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
# include <stdio.h>

int main(int ac, char **av)
{
    char    *ag;
    t_swap  *tab;

    if (ac == 1)
        return (0);
    tab = malloc(sizeof(t_swap));
    if (!tab)
        return (-1);
    if (ac == 2)
        ag = ft_split(av[1], ' ');
    else
        ag = *av;
    tab->stack_a = ft_init(ag, ac);
    if (tab->stack_a == NULL)
        return (-1);
    tab->stack_b = NULL;
    return (0);
}