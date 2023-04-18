# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabpicci <gabpicci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 22:22:53 by gabpicci          #+#    #+#              #
#    Updated: 2023/04/18 19:40:23 by gabpicci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# .SILENT:

NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC =	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_strjoin.c ft_split.c

SRC_B = 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
				ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
				ft_lstclear.c ft_lstiter.c ft_lstmap.c

SRCO = $(SRC:.c=.o)

SRCO_B = $(SRC_B:.c=.o)

CME = ar -rcs

$(NAME):	$(SRCO)
			$(CME) $(NAME) $(SRCO)

all:	$(NAME)

clean:
		$(RM) $(SRCO)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

bonus: $(SRCO_B)
		$(CME) $(NAME) $(SRCO_B)

run:	re
		rm -f result
		$(CC) $(FLAGS) -o result main.c -L. -lft

.PHONY: all clean fclean re bonus run