#include "push_swap.h"

void add_at_big(t_data **list, int x)
{

    t_data *first_node =malloc(sizeof(t_data));
    first_node->n = x;
    first_node->next = *list;
    *list = first_node ;

}

void add_at_last(t_data **list, int x) {
    t_data *new_node;
    t_data *curr;
    new_node = malloc(sizeof(t_data));
    new_node->n = x;
    new_node->next = NULL;
    if (*list == NULL) {
        *list = new_node;
    } else {
        curr = *list;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = new_node;
    }

}
max_ind   get_max_ind(t_data **sk)
{
    max_ind data ;
    t_data *curr;
    int j = 1;
    curr = *sk;
    data.max = (*sk)->n;
    data.ind = 1;
    while(curr)
    {
        if((curr->n)>data.max)
        { 
            data.ind = j;
        data.max = curr ->n;
        }
        curr = curr->next;
        j++;
    }
    return  data;
}
/*void push_max_a_to_b(t_data **sak, t_data **sbk)
{
    int len = len_tab(sak);
    printf("hhhhh%d\n", len);
    int ind ;
    ind = get_max_ind(sak).ind;
    if(ind<=len/2)
    {
        while (get_max_ind(sak).ind !=1)
        {
            ra(sak);
        }
        push_a_to_b(sak, sbk);
    }else
    {
        while (get_max_ind(sak).ind!=1)
        {
            rra(sak);
        }
        push_a_to_b(sak, sbk);
        
    }
}*/
