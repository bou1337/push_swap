#include "push_swap.h"

void sort_two(t_data **stack)
{

    if((*stack)->n >(*stack)->next->n)
    {
    sa(stack);
    }

}

void sort_three(t_data ** sk)
{

    int a;
    int b;
    int c;
    a = (*sk)->n;
    b = (*sk)->next->n;
    c= (*sk)->next->next->n;
    if(a>b&& a>c&& b>c)
    {
        ra(sk);
        sa(sk);
    }
    if(a>b&& a>c && c>b)
    ra(sk);
    if(b>a &&b>c && a>c)
    {
        rra(sk);
    }
    if(b>a && b>c && c>a)
    {
        rra(sk);
        sa(sk);
    }
    if(c>a&&c>b && a>b)
    sa(sk);
}
void sort_four(t_data **sak, t_data **sbk)
{

    if(get_max_ind(sak).ind > 2)
    {
        while (get_max_ind(sak).ind!=1)
        rra(sak);
        push_a_to_b(sak, sbk);
    }
    else if(get_max_ind(sak).ind <= 2)
    {

        while(get_max_ind(sak).ind !=1)
        {

        ra(sak);

        }
        push_a_to_b(sak, sbk);
    }

    sort_three(sak);
    push_b_to_a(sak, sbk);
    ra(sak);
}
void  sort_five(t_data **sak, t_data **sbk)
{
    if(get_max_ind(sak).ind>3)
    {
        while (get_max_ind(sak).ind!=1)
        rra(sak);
        push_a_to_b(sak, sbk);
    }else
    {
        while (get_max_ind(sak).ind !=1)
        ra(sak);
        push_a_to_b(sak, sbk);
    }
    sort_four(sak, sbk);
    push_b_to_a(sak, sbk);
    ra(sak);

}
