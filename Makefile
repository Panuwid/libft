# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pjumpale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 09:40:53 by pjumpale          #+#    #+#              #
#    Updated: 2022/10/26 14:26:33 by pjumpale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_memset.c ft_bzero.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
       ft_strncmp.c ft_atoi.c ft_split.c ft_memchr.c ft_memcmp.c\
       ft_memcpy.c ft_calloc.c ft_strdup.c ft_memmove.c ft_strlcpy.c\
       ft_strlcat.c ft_strnstr.c ft_substr.c \

#SRCSB = 

OBJS := $(SRCS:.c=.o)
OBJSB := $(SRCSB:.c=.o)
all: $(NAME)

.c.o:
	gcc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
bonus: $(NAME) $(OBJSB)
	ar -rcs $(NAME) $(OBJSB)
clean:
	rm -f $(OBJS) $(OBJSB)
fclean: clean
	rm -f $(NAME) $(bonus)
re: fclean all

