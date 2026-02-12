/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorduka <alorduka@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:56:10 by alorduka          #+#    #+#             */
/*   Updated: 2026/02/12 18:19:38 by alorduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void	*memset (void *s, int c, size_t n);

int	ft_isalnum(int c);

int	ft_isalpha(int c);

int	ft_isdigit(int c);

size_t	ft_strlen(const char *s);

size_t ft_strlcpy(char *dst, const char *src, size_t size);

void ft_putnbr_fd(int n, int fd);

char *ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strrchr(const char *s, int c);

void	*ft_memcpy(void *dest, const void *src, size_t n);

char	*ft_strchr(const char *s, int c);

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);

int ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void ft_lstadd_back(t_list **lst, t_list *new);

void ft_lstdelone(t_list *lst, void (*del)(void*));

void ft_lstclear(t_list **lst, void (*del)(void*));

void	ft_lstiter(t_list *lst, void (*f)(void *));
