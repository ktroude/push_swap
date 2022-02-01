#include "push.h"

void    check_pos_3(t_list *start_a, t_list *a)
{
    a = start_a;
    if (start_a->index == 1 && start_a->next->index == 0 && start_a->next->next->index == 2)
        swap_a(&start_a, a);
    else if (start_a->index == 2 && start_a->next->index == 1 && start_a->next->next->index == 0)
    {
        swap_a(&start_a, a);
        reverse_a(&start_a, a);
    }
    else if (start_a->index == 2 && start_a->next->index == 0 && start_a->next->next->index == 1)
        rotate_a(&start_a, a);   
    else if (start_a->index == 0 && start_a->next->index == 2 && start_a->next->next->index == 1)
    {
        swap_a(&start_a, a);
        rotate_a(&start_a, a);   
    }
    else if (start_a->index == 1 && start_a->next->index == 2 && start_a->next->next->index == 0)
        reverse_a(&start_a, a);
    a = start_a;
        return ;
}

void    check_pos_5(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    get_neg_index(*start_a, a);
    push_b(start_a, start_b, a, b);
    push_b(start_a, start_b, a, b);
    get_neg_index(*start_a, a);
    check_pos_3(*start_a, a);
    a = *start_a;
    organise_3(start_a, start_b, a, b);
    return ;
}

void    organise_3(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    b = *start_b;
    a = *start_a;
    if ((*start_b)->index < (*start_b)->next->index)
        swap_b(start_b, b);
    b = *start_b;
    if ((*start_b)->index == 1 && (*start_b)->next->index == 0)
        case_1(start_a, start_b, a, b);
    else if ((*start_b)->index == 2 && (*start_b)->next->index == 0)
        case_2(start_a, start_b, a, b);
    else if ((*start_b)->index == 3 && (*start_b)->next->index == 0)
        case_3(start_a, start_b, a, b);
    else if ((*start_b)->index == 4 && (*start_b)->next->index == 0)
        case_4(start_a, start_b, a, b);
    else if ((*start_b)->index == 2 && (*start_b)->next->index == 1)
        case_5(start_a, start_b, a, b);
    else if ((*start_b)->index == 3 && (*start_b)->next->index == 1)
        case_6(start_a, start_b, a, b);
    else if ((*start_b)->index == 4 && (*start_b)->next->index == 1)
        case_7(start_a, start_b, a, b);
    else if ((*start_b)->index == 3 && (*start_b)->next->index == 2)
        case_8(start_a, start_b, a, b);
    else if ((*start_b)->index == 4 && (*start_b)->next->index == 2)
        case_9(start_a, start_b, a, b);
    else if ((*start_b)->index == 4 && (*start_b)->next->index == 3)
        case_10(start_a, start_b, a, b);
}

