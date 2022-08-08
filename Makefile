# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 17:15:56 by alopes-n          #+#    #+#              #
#    Updated: 2022/06/21 16:05:22 by alopes-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	 		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
			ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c \
			ft_strdup.c ft_calloc.c ft_atoi.c ft_strjoin.c ft_substr.c \
			ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c

B_SRCS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c

HEADER	=	libft.h

OBJS	=	$(SRCS:.c=.o)

B_OBJS	=	$(B_SRCS:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror

all:	$(NAME)

.c.o:	$(HEADER) Makefile
	cc $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS) 
	ar -rcs $(NAME) $(OBJS)

bonus:	$(OBJS)	$(B_OBJS)
	ar -rcs $(NAME) $(OBJS) $(B_OBJS)

clean:
	rm -f $(OBJS) $(B_OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re