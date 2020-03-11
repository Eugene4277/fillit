# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ystepane <ystepane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 17:32:26 by ystepane          #+#    #+#              #
#    Updated: 2020/03/05 18:48:03 by ystepane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJ = 	ft_bzero.o ft_isascii.o ft_memccpy.o ft_memcpy.o ft_strcat.o \
	ft_strcpy.o  ft_strlen.o  ft_strncpy.o ft_strstr.o  ft_isalnum.o \
	ft_isdigit.o ft_memchr.o  ft_memmove.o ft_strchr.o  ft_strdup.o \
 	ft_strncat.o ft_strnstr.o ft_tolower.o ft_atoi.o    ft_isalpha.o \
	ft_isprint.o ft_memcmp.o  ft_memset.o ft_strcmp.o  ft_strlcat.o \
	ft_strncmp.o ft_strrchr.o ft_toupper.o \
	ft_itoa.o ft_lstadd.o ft_lstdel.o ft_lstdelone.o ft_lstiter.o \
	ft_lstmap.o ft_lstnew.o ft_memalloc.o ft_memdel.o ft_putchar.o \
	ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o ft_putnbr.o \
	ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o ft_strclr.o ft_strdel.o \
	ft_strequ.o ft_striter.o ft_striteri.o ft_strjoin.o ft_strmap.o \
	ft_strmapi.o ft_strnequ.o ft_strnew.o ft_strsplit.o ft_strsub.o \
	ft_strtrim.o get_next_line.o

SRC =   ft_bzero.c   ft_isascii.c ft_memccpy.c ft_memcpy.c  ft_strcat.c \
	ft_strcpy.c  ft_strlen.c  ft_strncpy.c ft_strstr.c  ft_isalnum.c \
	ft_isdigit.c ft_memchr.c  ft_memmove.c ft_strchr.c  ft_strdup.c \
 	ft_strncat.c ft_strnstr.c ft_tolower.c ft_atoi.c    ft_isalpha.c \
	ft_isprint.c ft_memcmp.c  ft_memset.c  ft_strcmp.c  ft_strlcat.c \
	ft_strncmp.c ft_strrchr.c ft_toupper.c \
	ft_itoa.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \
	ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memdel.c ft_putchar.c \
	ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c \
	ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strclr.c ft_strdel.c \
	ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strmap.c \
	ft_strmapi.c ft_strnequ.c ft_strnew.c ft_strsplit.c ft_strsub.c \
	ft_strtrim.c get_next_line.c

INC = ./

all: $(NAME)

$(NAME): $(SRC) libft.h
	gcc -Wall -Wextra -Werror -c -I $(INC) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
