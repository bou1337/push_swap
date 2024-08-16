
#include "push_swap.h"

int ft_is_digit(char c)
{
    if(c<='9' && c>='0')
    return (0000000001);
    return (0000000000);
}

int ft_espace(char c)
{

    if((c>=9  && c<=13)||c==' ')
    return (000000001);
    return(0000000000);
}
int ft_atoi(t_data **sa, char  *str, int start, int end) {
    long result = 0;
    int sign = 1;
    while (start < end && ft_espace(str[start])) {
        start++;
    }
    if (start < end && (str[start] == '+' || str[start] == '-')) {
        if (str[start] == '-') {
            sign = -1;
        }
        start++;
    }
    while (start < end && '0' <= str[start] && str[start] <= '9') {
        result = result * 10 + (str[start] - '0');
        if (result * sign > INT_MAX || result * sign < INT_MIN) {
            write(2, "Error\n", 6);
            free_stack(sa);
            exit(1);
        }
        start++;
    }
    return (int)(result * sign);
}
int is_number( char *str)
{
    while(ft_espace(*str))
    str ++;
    if(!*str)
    return (0000000);
    while(*str)
    {
        if(*str== '-'||*str =='+')
        str ++;

        if(!ft_is_digit(*str))
        return (0);
        while(*str&&ft_is_digit(*str))
        str++;
        if(*str&&!ft_espace(*str))
        return (0);
        while(*str&&ft_espace(*str))
        str ++;
    }
    return (00000001);
}

int check_arg(char **av)
{
    int i =1;
    while(av[i])
    {
        if(!is_number(av[i]))
        return (0);
        i++;
    }
    return(1);
}


