# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/25 11:10:10 by dide-jes          #+#    #+#              #
#    Updated: 2025/11/25 11:30:59 by dide-jes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

AR = ar rcs

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
	  ft_aux.c

OBJ = $(SRC:.c=.o)

OBJ_LIBFT = ./libft/ft_strjoin.o \
		./libft/ft_atoi.o \
		./libft/ft_strtrim.o \
		./libft/ft_bzero.o \
		./libft/ft_lstnew.o \
		./libft/ft_calloc.o \
		./libft/ft_isalnum.o \
		./libft/ft_isalpha.o \
		./libft/ft_isascii.o \
		./libft/ft_isdigit.o \
		./libft/ft_isprint.o \
		./libft/ft_memchr.o \
		./libft/ft_memcmp.o \
		./libft/ft_memcpy.o \
		./libft/ft_memmove.o \
		./libft/ft_memset.o \
		./libft/ft_strchr.o \
		./libft/ft_strdup.o \
		./libft/ft_strlcat.o \
		./libft/ft_strlcpy.o \
		./libft/ft_strlen.o \
		./libft/ft_strncmp.o \
		./libft/ft_strnstr.o \
		./libft/ft_strrchr.o \
		./libft/ft_tolower.o \
		./libft/ft_toupper.o \
		./libft/ft_substr.o \
		./libft/ft_split.o \
		./libft/ft_itoa.o \
		./libft/ft_strmapi.o \
		./libft/ft_striteri.o \
		./libft/ft_putchar_fd.o \
		./libft/ft_putstr_fd.o \
		./libft/ft_putendl_fd.o \
		./libft/ft_putnbr_fd.o \
		./libft/ft_lstadd_front.o \
		./libft/ft_lstsize.o \
		./libft/ft_lstlast.o \
		./libft/ft_lstadd_back.o \
		./libft/ft_lstdelone.o \
		./libft/ft_lstclear.o \
		./libft/ft_lstiter.o \
		./libft/ft_lstmap.o


all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C libft bonus
	$(AR) $(NAME) $(OBJ) $(OBJ_LIBFT)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	$(MAKE) clean -C libft
	rm -f $(OBJ)

fclean: clean
	$(MAKE) fclean -C libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re