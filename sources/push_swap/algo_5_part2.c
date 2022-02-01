#include "push.h"

void    case_6(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    a = *start_a;
    b = *start_b;
    rotate_a(start_a, a);
    push_a(start_a, start_b, a, b);
    reverse_a(start_a, a);
    push_a(start_a, start_b, a, b);
    reverse_a(start_a, a);
    
}

void    case_7(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    a = *start_a;
    b = *start_b;
    push_a(start_a, start_b, a, b);
    a = *start_a;
    b = *start_b;
    rotate_a(start_a, a);
    a = *start_a;
    push_a(start_a, start_b, a, b);
    a = *start_a;
    b = *start_b;
    swap_a(start_a, a);
    a = *start_a;
}

void    case_8(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    a = *start_a;
    b = *start_b;
    reverse_a(start_a, a);
    reverse_a(start_a, a);
    push_a(start_a, start_b, a, b);
    push_a(start_a, start_b, a, b);
    reverse_a(start_a, a);
    reverse_a(start_a, a);
}

void    case_9(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    a = *start_a;
    b = *start_b;
    push_a(start_a, start_b, a, b);
    rotate_a(start_a, a);
    rotate_a(start_a, a);
    push_a(start_a, start_b, a, b);
    swap_a(start_a, a);
    reverse_a(start_a, a);
    }

void    case_10(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    a = *start_a;
    b = *start_b;
    swap_b(start_b, b);
    b = *start_b;
    push_a(start_a, start_b, a, b);
    b = *start_b;
    a = *start_a;
    rotate_a(start_a, a);
    a = *start_a;
    push_a(start_a, start_b, a, b);
    b = *start_b;
    a = *start_a;
    rotate_a(start_a, a);
    a = *start_a;
}