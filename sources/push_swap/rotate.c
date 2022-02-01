#include "push.h"

void    rotate_a(t_list **start, t_list *a)
{
    t_list *tmp;

    a = *start;
    tmp = a;
    a = a->next;
    *start = a;
    while (a->next)
        a = a->next;
    tmp->next = NULL;
    a->next = tmp;
    ft_putstr_fd("ra\n", 2);
    a = *start;
}

void    rotate_b(t_list **start, t_list *b)
{
    t_list *tmp;

    b = *start;
    tmp = b;
    b = b->next;
    *start = b;
    while (b->next)
        b = b->next;
    tmp->next = NULL;
    b->next = tmp;
    ft_putstr_fd("rb\n", 2);
    b = *start;
}

void    rotate_r(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    rotate_a(start_a, a);
    rotate_b(start_b, b);
    ft_putstr_fd("rr\n", 2);
}