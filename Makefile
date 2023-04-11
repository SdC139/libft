# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sde-carl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 18:15:04 by sde-carl          #+#    #+#              #
#    Updated: 2023/04/11 17:02:22 by sde-carl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME := libft.a

SRCS_DIR := ./

SRCS := ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c \
ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_atoi.c ft_itoa.c ft_putendl_fd.c \
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_putnbr_fd.c ft_strlen.c \
ft_toupper.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c \
ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c ft_striteri.c \

BONUS := ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \

FLAGS := -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

OBJ_BONUS = $(BONUS:.c=.o)

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${FLAGS} -g -c $< -o $@

$(NAME): $(OBJS)
	ar rcs ${NAME} ${OBJS}

all: $(NAME)

bonus : ${OBJ_BONUS}
	ar rcs ${NAME} ${OBJ_BONUS}

clean:
	${RM} ${OBJS} ${OBJ_BONUS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY : all bonus clean fclean re
