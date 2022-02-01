#include "push.h"

void    swap_a(t_list **start, t_list *a)
{
    t_list *tmp;

    a = *start;
    tmp = a;
    if (a == NULL || a->next == NULL || a->next->next == NULL)
        return ;
    a = a->next;
    tmp->next = tmp->next->next;
    a->next = tmp;
    *start = a; 
    ft_putstr_fd("sa\n", 2);
    return ;
}

void    swap_b(t_list **start, t_list *b)
{
   t_list *tmp;

    b = *start;
    tmp = b;
    if (b == NULL || b->next == NULL || b->next->next == NULL)
        return ;
    b = b->next;
    tmp->next = tmp->next->next;
    b->next = tmp;
    *start = b; 
    ft_putstr_fd("sb\n", 2);
    return ; 
}

void    swap_r(t_list *start_a, t_list *start_b, t_list *a, t_list *b)
{
    swap_a(&start_a, a);
    swap_b(&start_b, b);
    ft_putstr_fd("sr\n", 2);
}
