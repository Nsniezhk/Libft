/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsniezhk <nsniezhk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 11:49:45 by nsniezhk          #+#    #+#             */
/*   Updated: 2018/04/21 19:14:58 by nsniezhk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define FT_MAX(x, y) (x) > (y) ? (x) : (y)
# include <unistd.h>
# include <wchar.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *destination, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *destination, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *destination, const void *src, size_t n);
const void			*ft_memchr(const void *src, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *str);
size_t				ft_strnlen(char *str, size_t maxlen);
char				*ft_strdup(const char *src);
char				*ft_strcpy(char *destination, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t length);
char				*ft_strcat(char *destination, const char *add);
char				*ft_strncat(char *destination, char *src, size_t n);
char				*ft_itoa_base(int num, int base);
size_t				ft_strlcat(char *dest, const char *src, size_t dest_size);
char				*ft_strchr(const char *string, int c);
char				*ft_strrchr(const char *string, int c);
char				*ft_strstr(const char *string_1, const char *string_2);
char				*ft_strnstr(const char *s1, const char *s2, size_t length);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *string);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_strclen(char *str, char c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoin_leakless(char *s1, char *s2);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putwchar(wchar_t c);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char *str);
void				ft_putnstr(char *str, size_t strlen);
void				ft_strrev(char *str);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstrev(t_list **alst);
size_t				ft_lstcount(t_list *lst);
size_t				ft_numlen(unsigned int num);
int					ft_sqrt(int num);
char				*ft_strndup(const char *src, size_t lenght);
#endif
