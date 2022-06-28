/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:16:35 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/26 15:17:08 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* ########################################################################## */
/* LIBRARY */
/* ####### */

# include <stddef.h>

/* ########################################################################## */

/* ########################################################################## */
/* TYPEDEF */
/* ####### */

typedef unsigned char	t_uint8;
typedef unsigned short	t_uint16;
typedef unsigned int	t_uint32;
typedef unsigned long	t_uint64;
typedef __uint128_t		t_uint128;

/* ########################################################################## */
/* STRUCT */
/* ###### */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* ########################################################################## */

/* ########################################################################## */
/* FILES */
/* ##### */

// ft_atoi.c
int			ft_atoi(const char *nptr);

// ft_atol.c
long int	ft_atol(const char *nptr);

// ft_bzero.c
void		ft_bzero(void *s, size_t n);

// ft_calloc.c
void		*ft_calloc(size_t nmemb, size_t size);

// ft_get_words.c
int			ft_get_words(char const *str, char c);

// ft_isalnum.c
int			ft_isalnum(int c);

// ft_isalpha.c
int			ft_isalpha(int c);

// ft_isascii.c
int			ft_isascii(int c);

// ft_isdigit.c
int			ft_isdigit(int c);

// ft_isprint.c
int			ft_isprint(int c);

// ft_itoa.c
char		*ft_itoa(int n);

// ft_lstadd_back.c
void		ft_lstadd_back(t_list **lst, t_list *new);

// ft_lstadd_front.c
void		ft_lstadd_front(t_list **lst, t_list *new);

// ft_lstclear.c
void		ft_lstclear(t_list **lst, void (*del)(void *));

// ft_lstdelone.c
void		ft_lstdelone(t_list *lst, void (*del)(void *));

// ft_lstiter.c
void		ft_lstiter(t_list *lst, void (*f)(void *));

// ft_lstlast.c
t_list		*ft_lstlast(t_list *lst);

// ft_lstmap.c
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// ft_lstnew.c
t_list		*ft_lstnew(void *content);

// ft_lstsize.c
int			ft_lstsize(t_list *lst);

// ft_memchr.c
void		*ft_memchr(const void *s, int c, size_t n);

// ft_memcmp.c
int			ft_memcmp(const void *s1, const void *s2, size_t n);

// ft_memcpy.c
void		*ft_memcpy(void *dest, const void *src, size_t n);

// ft_memmove.c
void		*ft_memmove(void *dest, const void *src, size_t n);

// ft_memset.c
void		*ft_memset(void *s, int c, size_t n);

// ft_nbrlen.c
int			ft_nbrlen(long int nb);

// ft_putchar_fd.c
void		ft_putchar_fd(char c, int fd);

// ft_putendl_fd.c
void		ft_putendl_fd(char *s, int fd);

// ft_putnbr_fd.c
void		ft_putnbr_fd(int n, int fd);

// ft_putstr_fd.c
void		ft_putstr_fd(char *s, int fd);

// ft_split.c
char		**ft_split(char const *s, char c);

// ft_split_free.c
void		ft_split_free(char **strarr);

// ft_strcat.c
char		*ft_strcat(char *dest, const char *src);

// ft_strchr.c
char		*ft_strchr(const char *s, int c);

// ft_strcpy.c
char		*ft_strcpy(char *dest, const char *src);

// ft_strcspn.c
size_t		ft_strcspn(char *s, const char *rejects);

// ft_strdup.c
char		*ft_strdup(const char *s);

// ft_striteri.c
void		ft_striteri(char *s, void (*f)(unsigned int, char *));

// ft_strjoin.c
char		*ft_strjoin(char const *s1, char const *s2);

// ft_strlcat.c
size_t		ft_strlcat(char *dst, const char *src, size_t size);

// ft_strlcpy.c
size_t		ft_strlcpy(char *dst, const char *src, size_t size);

// ft_strlen.c
int			ft_strlen(const char *s);

// ft_strmapi.c
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

// ft_strncat.c
char		*ft_strncat(char *dest, char *src, size_t n);

// ft_strncmp.c
int			ft_strncmp(const char *s1, const char *s2, size_t n);

// ft_strnstr.c
char		*ft_strnstr(const char *big, const char *little, size_t len);

// ft_strrchr.c
char		*ft_strrchr(const char *s, int c);

// ft_strspn.c
size_t		ft_strspn(char *s, const char *accepts);

// ft_strtok.c
char		*ft_strtok(char *str, char *token);

// ft_strtrim.c
char		*ft_strtrim(char const *s1, char const *set);

// ft_substr.c
char		*ft_substr(char const *s, unsigned int start, size_t len);

// ft_tolower.c
int			ft_tolower(int c);

// ft_toupper.c
int			ft_toupper(int c);

/* ########################################################################## */

#endif
