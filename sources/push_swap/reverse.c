#include "push.h"

void    reverse_a(t_list **start, t_list *a)
{
    t_list *tmp;
    int     i;

    i = 0;
    tmp = NULL;
    a = *start;
    if (a == NULL || a->next == NULL)
        return ;
    while (a->next->next)
        a = a->next;
    tmp = a->next;
    a->next = NULL;
    a = *start;
    tmp->next = a;
    *start = tmp;
    a = *start;
    ft_putstr_fd("rra\n", 2);
}

void    reverse_b(t_list **start, t_list *b)
{
    t_list *tmp;
    int     i;

    i = 0;
    tmp = NULL;
    b = *start;
    if (b == NULL || b->next == NULL)
        return ;
    while (b->next->next)
        b = b->next;
    tmp = b->next;
    b->next = NULL;
    b = *start;
    tmp->next = b;
    *start = tmp;
    b = *start;
    ft_putstr_fd("rrb\n", 2);
}

void    reverse_r(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    reverse_a(start_a, a);
    reverse_b(start_b, b);
    ft_putstr_fd("rrr\n", 2);
}