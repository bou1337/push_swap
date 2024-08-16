#ifndef PUSH_SWAP_H 
#define PUSH_SWAP_H 
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
typedef struct s_data
{
    int n;
    struct  s_data *next;
}t_data;

typedef struct max_and_ind
{
    int max;
    int ind;
}max_ind;

int main(int ac, char **av);
int is_number( char *str);
//int ft_atoi(char *str);
int ft_atoi(t_data **sa, char *str, int start , int end);
int ft_espace(char c);
int ft_is_digit(char c);
int check_arg(char **av);
int *linked_list_to_tab(t_data **stack,int len);
int len_tab(t_data **stack);
int check_doub(t_data **stack); //int check_doub(t_data **stack, int *tab, int  len)
void add_at_big(t_data **list, int x);
void add_at_last(t_data **list, int x);
void remove_first_element(t_data **sk);
max_ind   get_max_ind(t_data **sk);
void push_max_a_to_b(t_data **sak, t_data **sbk);
void sort_two(t_data **stack);
void sort_three(t_data ** sk);
void sort_four(t_data **sak, t_data **sbk);
void  sort_five(t_data **sak, t_data **sbk);
void swap(t_data **list);
void sa(t_data **list);
void sb(t_data **list);
void rat(t_data **list);
void ra(t_data **list);
void rb(t_data **list);
void rv(t_data **list);
void  rra(t_data ** list);
void rrb(t_data ** list);
void push_a_to_b(t_data **ska, t_data **skb );
void push_b_to_a(t_data **sak, t_data **sbk);
void sort_tab(int *tab,  int len);
void sort_b_5_100(t_data **stacka, t_data **stackb, int *tab, int len);
void sort_b_plus_100(t_data **stacka, t_data **stackb, int *tab, int len);
void sort_a(t_data **stacka, t_data **stackb, int len );
void check_sort(t_data **sa);
void adjust(int *start, int *end, int len);
void free_stack(t_data **sa);
#endif
