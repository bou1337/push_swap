#include "push_swap.h"

void push_a_to_b(t_data **ska, t_data **skb )
{
    t_data *head_a;
    head_a  = *ska;
    *ska = (*ska)->next;
    head_a ->next = *skb;
    *skb = head_a ;
    write(1,"pb\n", 3);
}
void push_b_to_a(t_data **sak, t_data **sbk)
{
    t_data *head_b;
    head_b = *sbk;
    *sbk = (*sbk)->next;
    head_b->next = *sak;
    *sak = head_b;

    write(1,"pa\n", 3);
}