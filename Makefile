CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a
AR		= ar rcs
RM		= rm -f

SRCS=	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c\

BSRC=ft_lstnew.c\
	ft_lstadd_front.c\
	ft_lstsize.c\
	ft_lstlast.c\
	ft_lstadd_back.c\


OBJ		= ${SRCS:.c=.o}
BOBJ	= ${BSRC:.c=.o}

%.o:%.c
	${CC} -c $< -o $@ ${CFLAGS}

${NAME}: ${OBJ}
		${AR} ${NAME} ${OBJ}

all: ${NAME}

clean:
	${RM} ${OBJ} ${BOBJ}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

bonus:	${NAME}	${BOBJ}
		${AR} ${NAME} ${BOBJ}

.SOL = all re fclean clean bonus