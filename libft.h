#ifndef	LIBFT
#define	LIBFT

#include <stdio.h>

int ft_strlen(char *str);
int ft_isalpha(char c);
int ft_isdigit(char c);
int ft_isalnum(char c);
int ft_isascii(char c);
int ft_isprint(int arg);
int ft_toupper(int c);
int ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, unsigned int n);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size);

#endif
