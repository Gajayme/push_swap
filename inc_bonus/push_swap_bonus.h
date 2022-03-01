/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gajayme <gajayme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:48:25 by gajayme           #+#    #+#             */
/*   Updated: 2022/02/25 23:20:34 by gajayme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

//INCS
# include "../libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

//DEFINES

# define MAX_INT 2147483647
# define MIN_INT -2147483648
# define MAL_ERR 1
# define ARG_ERR 2
# define BUFFER_SIZE 1024

# if BUFFER_SIZE < 0
#  undef BUFFER_SIZE
#  define BUFFER_SIZE -1
# endif

//STRUCT
typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}				t_stack;

typedef struct s_data
{
	int		*num_arr;
	int		len;
	int		min;
	t_stack	*stack_a;
	t_stack	*stack_b;

}				t_data;

//FUNCS
int		main(int as, char **av);

//gnl
char	*get_next_line(int fd);
char	*gnl_strchr(const char *string, int symbol);
char	*gnl_strjoin(char **s1, char const *s2);
void	*gnl_memmove(void *dest, const void *src, size_t n);
size_t	gnl_strlen(const char *str);

//parser
void	to_int(t_data *data, char **arr);
void	int_checker(t_data *data, long num, int last, char **arr);
void	char_checker(char **arr);
char	**divided_args(int ac, char **av);
void	reader(t_data *data, int ac, char **av);

//algorithm
void	fill_a(t_data *data);
void	cmd_checker(t_data *data, char *cmd);
void	distributor(t_data *data);

//stops
void	stop_1(char **arr, int flag);
void	stop_2(char **arr, t_data *data, int flag);
void	stop_3(t_data *data);
void	stop_4(t_data *data);
void	stop_5(t_data *data, int flag, char *cmd);

//push_swap funks
void	swap_a(t_stack **stack_a);
void	swap_b(t_stack **stack_b);
void	swap_ab(t_stack **stack_a, t_stack **stack_b);
void	push_a(t_stack **stack_a, t_stack **stack_b);
void	push_b(t_stack **stack_a, t_stack **stack_b);
void	rotate_a(t_stack **stack_a);
void	rotate_b(t_stack **stack_b);
void	rotate_ab(t_stack **stack_a, t_stack **stack_b);
void	rev_rotate_a(t_stack **stack_a);
void	rev_rotate_b(t_stack **stack_b);
void	rev_rotate_ab(t_stack **stack_a, t_stack **stack_b);
void	rev_ab_b(t_stack **stack_b);
void	rev_ab_a(t_stack **stack_a);

//utils
int		up_putendl_fd(char *s, int fd);
long	up_atoi(const char *str);
int		find_min(t_data *data);
int		arr_len(char **arr);
int		up_strcmp(const char *str1, const char *str2);

//list utils
t_stack	*upt_lstnew(t_data *data, int i);
void	up_lstadd_front(t_stack **lst, t_stack *new);
void	up_lstadd_back(t_stack **lst, t_stack *new);

//if sorted
int		if_sorted(t_stack *stack);
int		if_sorted_inner(t_stack *stack, t_stack *tmp);

#endif
