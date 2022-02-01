#include "push.h"

int count_arg(t_list *start, t_list *lst)
{
    int i;

    i = 0;
    lst = start;
    while (lst)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}

int does_need_algo(t_list *start, t_list *a)
{
    a = start;
    while (a)
    {
        if (a->next && a->index < a->next->index)
            return (2);
        a = a->next;
    }
    a = start;
    return (-1);
}

void    algo(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    int i;

    if (does_need_algo == -1)
        return ;
    else 
    {
        i = count_arg(*start_a, a);
        if (i == 0)
            return ;
        if (i == 1)
            return ;
        if (i == 2)
            ft_algo_2(start_a, a);
        if (i == 3)
            ft_algo_3(start_a, a);
        if (i == 4)
            ft_algo_4(start_a , a);
        if (i > 3 && i <= 10)
            ft_algo_5(start_a, start_b, a, b);
        if (i > 10)
            ft_algo_big(start_a, start_b, a, b);
    }
}

void    ft_algo_2(t_list **start, t_list *a)
{
    if ((*start)->nbr > (*start)->next->nbr)
    {
        swap_a(start, a);
        return ;
    }
}

void    ft_algo_3(t_list **s, t_list *a)
{
    int a;
    int b;
    int c;

    a = (*s)->nbr;
    b = (*s)->next->nbr;
    c = (*s)->next->next->nbr;
    a = *s;
    if (b < a && b < c && a < c)
        swap_a(s, a);
    else if (b < a && b > c && a > c)
        {
            swap_a(s, a);
            reverse_a(s, a);
        }
    else if (b < a && b < c && a > c)
        rotate_a(s, a);
    else if (b > a && b > c && a < c)
        {
            swap_a(s, a);
            rotate_a(s, a);
        }
    else if ( b > a && b > c && a > c)
        reverse_a(s, a);
}

void    ft_algo_4(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    a = *start_a;
    b = *start_b;
    push_b(start_a, start_b, a, b);
    ft_algo_3(start_a, a);
    while ((*start_b)->index != (*start_a)->index + 1)
        rotate_a(start_a, a);
    push_a(start_a, start_b, a, b);
    while ((*start_a)->index != 0)
        rotate_a(start_a, a);
}

void    ft_algo_5(t_list ** start_a, t_list **start_b, t_list *a, t_list *b)
{
    a = *start_a;
    b = *start_b;
    push_b(start_a, start_b, a, b);
    push_b(start_a, start_b, a, b);
    ft_algo_3(start_a, a);
}


void    find_suit(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    t_list  *tmp;
    int     i;
    int     j;

    tmp = NULL;
    i = 0;
    a = *start_a;
    b = *start_b;
    /*while (a)
    {
        while (a->index != a->next->index + 1)
            push_b(start_a, start_b, a, b);
    }*/
    while (a)
    {
        if (a->index == a->next->index + 1 && a->next)
        {
            if (i == 0 || (i < j && i > 0))
                tmp = a;
            while (a->index == a->next->index + 1 && a->next)
            {
                i++;
                a = a->next;
            }
            i = -1;
        }
        a = a->next;
    }
}