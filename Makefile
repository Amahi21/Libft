# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amahi <amahi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 16:29:09 by amahi             #+#    #+#              #
#    Updated: 2021/11/10 01:11:56 by amahi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST =	ft_isalpha.c	ft_toupper.c	\
		ft_isdigit.c	ft_tolower.c	\
		ft_isalnum.c	ft_strchr.c		\
		ft_isascii.c	ft_strrchr.c	\
		ft_isprint.c	ft_strncmp.c	\
		ft_strlen.c		ft_memmove.c	\
		ft_memset.c		ft_memchr.c		\
		ft_bzero.c		ft_memcmp.c		\
		ft_memcpy.c		ft_strnstr.c	\
		ft_strlcpy.c	ft_atoi.c		\
		ft_strlcat.c	ft_calloc.c		\
		ft_strdup.c		ft_substr.c		\
		ft_strjoin.c	ft_striteri.c	\
		ft_strtrim.c	ft_putendl_fd.c	\
		ft_split.c		ft_strmapi.c	\
		ft_putchar_fd.c	ft_putstr_fd.c	\
		ft_putnbr_fd.c	ft_itoa.c		\

B_LIST =	ft_lstnew.c		ft_lstadd_front.c	\
			ft_lstsize.c	ft_lstadd_back.c	\
			ft_lstlast.c	ft_lstdelone.c		\
			ft_lstclear.c	ft_lstiter.c		\
			ft_lstmap.c
		

OBJ = $(patsubst %.c, %.o, $(LIST) $(B_LIST))

HEADER = libft.h

OPTFLAGS = -O2 -c -I $(HEADER)
FLAGS = -Wextra -Werror -Wall

all: $(NAME)

$(NAME) : $(OBJ)
	gcc $(FLAGS) $(OPTFLAGS) $(LIST)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

bonus : $(OBJ)
	gcc $(FLAGS) $(OPTFLAGS) $(LIST) $(B_LIST)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

%.o : %.c $(HEADER)
	gcc $(FLAGS) $(OPTFLAGS) -c $< -o $@ -MD

clean :
	rm -f $(OBJ)
	rm -f *.d

fclean : clean 
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re