# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhairul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 12:27:40 by mkhairul          #+#    #+#              #
#    Updated: 2022/06/02 12:27:40 by mkhairul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

AR		= ar rcs

RM		= rm -f

NAME	= libft.a

FILES	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		  	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c \
			ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
			ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_strncmp.c

FILO	= $(FILES:.c=.o)

INCLUDES = ./libft.h

all: $(NAME)

$(NAME): $(FILO)
	$(AR) $(NAME) $(FILO)

clean: 
	$(RM) *.o

fclean: clean
	 rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
