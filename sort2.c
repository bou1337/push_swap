#include "push_swap.h"

void check_sort(t_data **sa)
{
    t_data *curr ;
    curr = *sa;
    int str = 1;
    while(curr->next)
    {
        if(curr->n>curr->next->n)
        {
            str  = 0;
        }
        curr =curr->next;
    }
    if(str ==1)
    {
        free_stack(sa);
        exit(0);
    }
}

void sort_tab(int *tab, int len) {
    int i = 0 ;
    int  j ;
    int  min_indx;
    int  temp;
    int  srt;
    srt =1;
    while (i < len) {
        min_indx = i;
        j = i + 1;
        while (j < len) {
            if (tab[j] < tab[min_indx]) {
                min_indx = j;
                srt =0;
            }
            j++;
        }
            temp = tab[i];
            tab[i] = tab[min_indx];
            tab[min_indx] = temp;
        i++;
    }
}
void adjust(int *start, int *end, int len)
{
    (*start) ++;
    (*end) ++;
    if(*end == len )
    *end=len-1; 
}
void sort_b_5_100(t_data **stacka, t_data **stackb, int *tab, int len)
{
    int start;
    int end;
    start = 0;
    end = len /5;
        while ((*stacka)->next)
        {
            if ((*stacka)->n >= tab[start] && (*stacka)->n <= tab[end])
            {
                push_a_to_b(stacka, stackb);
                adjust(&start, &end,len);
            }
            else if ((*stacka)->n < tab[start])
            {
                push_a_to_b(stacka, stackb);
                rb(stackb);
                adjust(&start, &end, len);
    
            }
            else 
            {

                ra(stacka);
            }
        }
        push_a_to_b(stacka, stackb);
    }

void sort_b_plus_100(t_data **stacka, t_data **stackb, int *tab, int len)
{
    int start;
    int end;
    start = 0;
    end = len / 20;
        while (start < len)
        {
            if ((*stacka)->n >= tab[start] && (*stacka)->n <= tab[end])
            {
                push_a_to_b(stacka, stackb);
                adjust(&start, &end,len);
            }
            else if ((*stacka)->n < tab[start])
            {
                push_a_to_b(stacka, stackb);
                rb(stackb);
                adjust(&start, &end, len);
            }
            else 
            {
                ra(stacka);
            }
        }
}

 void sort_a(t_data **stacka, t_data **stackb, int len )
 {
    int lenb;
    int i = 0;
    while(i<len)
    { 
        lenb =len_tab(stackb);
        if(get_max_ind(stackb).ind<=lenb/2)
        {
        while(get_max_ind(stackb).ind !=1 )
        {
    
        rb(stackb);
        }
        push_b_to_a(stacka, stackb);
        }
        else
        { 
        while(get_max_ind(stackb).ind !=1)
        rrb(stackb);
        push_b_to_a(stacka, stackb);
        }
        i++;
    }
    }