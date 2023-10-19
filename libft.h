/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:58:32 by mlapique          #+#    #+#             */
/*   Updated: 2023/10/19 15:43:55 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_bzero(void *b, int n);
int	    ft_isalnum(int c);
int	    ft_isalpha(int c);
int 	ft_isascii(int c);
int	    ft_isdigit(int c);
int	    ft_isprint(int c);
void	*ft_memcpy(void *dst, const void *src, int n);
void	*ft_memmove(void *dst, const void *src, int n);
void	*ft_memset(void *b, int c, int n);
char	*ft_strchr(const char *str, int c);
int	    ft_strlcat(char *dst, const char *src, int n);
int     strlcpy(char *dst, char *src, int dstsize);
int	    ft_strlen(char *str);
char	*ft_strrchr(const char *s, int c);
int	    ft_tolower(int c);
int	    ft_toupper(int c);