/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:55:19 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/12 09:27:51 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int				ft_isalpha(int ch);
int				ft_isdigit(int ch);
int				ft_isalnum(int ch);
int				ft_isascii(int ch);
int				ft_isprint(int ch);
int				ft_strlen(const char *str);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
int				ft_memcmp(void *s1, void *s2, unsigned int n);
int				ft_atoi(const char *s);
int				ft_lstsize(t_list *lst);

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size);

void			*ft_memset(void *destination, int c, unsigned int n);
void			*ft_bzero(void *destination, unsigned int n);
void			*ft_memcpy(void *dst, const void *src, unsigned int n);
void			*ft_memchr(void *str, int c, unsigned int n);
void			*ft_memmove(void *destination, void *source, unsigned int n);
void			*ft_calloc(unsigned int n, unsigned int m);

void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));

char			*ft_strchr(char *str, int c);
char			*ft_strrchr(char *str, int c);
char			*ft_strnstr(const char *s1, const char *s2, unsigned int n);
char			*ft_strdup(char *str);
char			*ft_substr(char const *s, unsigned int start, unsigned int len);

char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_itoa(int num);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char			**ft_split(char const *s, char c);

t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), \
							void (*del)(void *));

#endif
