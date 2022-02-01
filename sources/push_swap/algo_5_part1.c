#include "push.h"

void    case_1(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    a = *start_a;
    b = *start_b;
    push_a(start_a, start_b, a, b);
    a = *start_a;
    b = *start_b;
    push_a(start_a, start_b, a, b);
    a = *start_a;
    b = *start_b;
}

void    case_2(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    a = *start_a;
    b = *start_b;
    push_a(start_a, start_b, a, b);
    a = *start_a;
    b = *start_b;
    swap_a(start_a, a);
    a = *start_a;
    push_a(start_a, start_b, a, b);
    a = *start_a;
    b = *start_b;
}

void    case_3(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    a = *start_a;
    b = *start_b;
    reverse_a(start_a, a);
    push_a(start_a, start_b, a, b);
    reverse_a(start_a, a);
    reverse_a(start_a, a);
    push_a(start_a, start_b, a, b);
}

void    case_4(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    a = *start_a;
    b = *start_b;
    push_a(start_a, start_b, a, b);
    b = *start_b;
    rotate_a(start_a, a);
    push_a(start_a, start_b, a, b);
    b = *start_b;
}

void    case_5(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    a = *start_a;
    b = *start_b;
    printf("%d\n", (*start_a)->nbr);
    rotate_a(start_a, a);
    push_a(start_a, start_b, a, b);
    push_a(start_a, start_b, a, b);
    reverse_a(start_a, a);
}    