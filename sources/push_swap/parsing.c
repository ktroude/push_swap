/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktroude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:45:43 by ktroude           #+#    #+#             */
/*   Updated: 2022/01/19 17:00:28 by ktroude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

t_list	*parsing_a1(char **argv)
{
    t_list  *start;
    t_list  *a;
    char    **tab;
    int i;

    tab = ft_split(argv[1], ' ');
    i = 0;
    a = malloc(sizeof(t_list));
    if (a == NULL)
        exit(EXIT_FAILURE);
    start = a;
    while (tab[i])
    {
        a->nbr = ft_atoi(tab[i]);
        if (tab[i + 1])
        {
            a->next = malloc(sizeof(t_list));
            a = a->next;
        }
        else
            a->next = NULL;
        free(tab[i]);
        i++;
    }
    free(tab);
    get_neg_index(start, a);
    return (start);
}

t_list	*parsing_a2(int argc, char **argv)
{
    t_list  *start;
    t_list  *a;
    int nb_arg;

    nb_arg = 0;
    a = malloc(sizeof(t_list));
    if (a == NULL)
        exit(EXIT_FAILURE);
    start = a;
    while (++nb_arg < argc)
    {
        a->nbr = ft_atoi(argv[nb_arg]);
        if (nb_arg < argc - 1)
        {
            a->next = malloc(sizeof(t_list));
            a = a->next;
        }
        else
            a->next = NULL;
    }
    get_neg_index(start, a);
    return (start);
}

void    get_pos(t_list *start, t_list *a)
{
    int i;

    i = 0;
    a = start;
    while (a)
    {
        a->pos = i;
        a = a->next;
        i++;
    }
}

void    get_neg_index(t_list *start, t_list *a)
{   
    static int  i;

    i = 0;
    a = start;
    while (a)
    {
        a->index = -1;
        a = a->next;
    }
    a = start;
    get_index(start, a ,i);
}

void    check_index(t_list *start, t_list *a, int i)
{
   a = start;
    while (a)
    {
        if (a->index >= 0)
            a = a->next;
        else 
            get_index(start, a, i);
    } 
}

void    get_index(t_list *start, t_list *a, int i)
{
    int tmp;

    a = start;
    tmp = 2147483647;
    while (a)
    {
        if (a->index < 0 && a->nbr <= tmp)
            tmp = a->nbr;
        a = a->next;
    }
    a = start;
    while (a)
    {
        if (a->nbr == tmp)
        {
            a->index = i;
            i++;
        }
        a = a->next;
    }
        check_index(start, a, i);
        a = start;
}
