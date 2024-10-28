#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

int ft_atoi(const char *s);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char *ft_strchr(const char *str, int c);
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strrchr(const char *str, int c);
int ft_tolower(int c);
int ft_toupper(int c);

#endif