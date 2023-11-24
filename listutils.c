/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:33:10 by jmilesi           #+#    #+#             */
/*   Updated: 2023/11/24 12:39:27 by jmilesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_pslist
{
	int		element;
	int		index;
	struct  s_pslist	*next;
}	t_pslist;

void printList(t_pslist *next)
{
    t_pslist    *ptr;

    ptr = next;
    while (ptr != NULL)
    {
        printf("%d->", ptr->element);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void push(t_pslist** head_ref, int new_element) 
{ 
    /* allocate node */
    t_pslist *new_node = malloc(sizeof(t_pslist)); 
 
    /* put in the data */
    new_node->element = new_element; 
 
    /* link the old list of the new node */
    new_node->next = (*head_ref); 
 
    /* move the head to point to the new node */
    (*head_ref) = new_node; 
} 

int main() 
{ 
    /* Start with the empty list */
    t_pslist *head = NULL; 
    int i; 
 
    for (i=5; i>0; i--) 
    { 
        push(&head, i); 
        printList(head); 
        //printMiddle(head); 
    } 
 
    return 0; 
}

