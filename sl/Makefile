# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 14:17:35 by aafounas          #+#    #+#              #
#    Updated: 2024/06/11 14:17:37 by aafounas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS =		src/check/checkmap.c \
			src/check/ft_bzero.c \
			src/check/ft_split.c \
			src/check/get_next_line_utils.c \
			src/check/get_next_line.c \
			src/check/path.c \
			src/check/check_p.c \
			src/check/all_check.c \
			src/display/call_display.c \
			src/display/display_all.c \
			src/display/display_collectibles.c \
			src/display/display_player.c \
			src/display/keyhook.c \
			src/free/error.c \
			src/free/free_textures.c \
			src/free/ft_free.c \
			src/free/free_image.c \
			src/mlx/call.c \
			src/mlx/image.c \
			src/mlx/texture_init.c \
			src/printf/ft_print_nbr.c \
			src/printf/ft_print.c \
			src/printf/ft_printf.c \
			src/printf/ft_itoa.c \
			main.c \





OBJS = $(SRCS:.c=.o)
MLX42 = ./MLX42

CC = cc
CFLAGS = -Wall -Wextra -Werror -g -g3 -fsanitize=address
RM = rm -rf
AR = ar rcs
NAME = so_long

all: $(NAME)
 
${NAME}: 	${OBJS}
	@cmake ${MLX42} -B ${MLX42}/build && make -C ${MLX42}/build -j4
	@${CC} ${CFLAGS} -Iinclude -ldl -lglfw -pthread -lm ${OBJS} ${MLX42}/build/libmlx42.a -o ${NAME}
	
clean:
	$(RM) $(OBJS)

fclean: clean
	${RM} ${MLX42}/build
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re