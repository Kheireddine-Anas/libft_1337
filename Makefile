CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

RM		= rm -rf

SRCS=	ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_putchar_fd.c\
		ft_substr.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strdup.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_itoa.c\
		ft_strtrim.c\
		ft_calloc.c\
		ft_strmapi.c\

BSRC=	ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c\

OBJ		= ${SRCS:.c=.o}

BOBJ	= ${BSRC:.c=.o}

${NAME}: ${OBJ}
		$(AR) rcs ${NAME} ${OBJ}

all: ${NAME}

clean:
	${RM} ${OBJ} ${BOBJ}

bonus:	${NAME} ${BOBJ}
		${AR} rcs ${NAME} ${BOBJ}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all re fclean clean bonus