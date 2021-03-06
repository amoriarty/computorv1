# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alegent <alegent@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/04 09:54:26 by alegent           #+#    #+#              #
#    Updated: 2015/03/28 17:09:47 by alegent          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#This is a typical Makefile, re-usable anytime you want to compil C project.
#All is in quiet for now, thank to do all the completion that needed for
# specify project

#Define name of program here
NAME= computor

#SRC BLOC
# define all the .c file in the variable SRC NAME
SRC_PATH= srcs/
SRC_NAME= main.c \
	  ft_pow.c \
	  ft_sqrt.c \
	  ft_atoi_double.c \
	  new_node.c \
	  ft_split.c \
	  get_values.c \
	  ft_putdouble.c \
	  print_second.c \
	  print_one.c \
	  computor.c \
	  print_degres.c \
	  solve_one.c \
	  solve_two.c \
	  ft_dtoa.c \
	  everything.c \
	  verif_x.c \
	  verif_split.c \
	  reduc.c \
	  get_degres.c \
	  solver.c
SRC= $(addprefix $(SRC_PATH), $(SRC_NAME))

#OBJ BLOC
#Do nothing here
OBJ_PATH= obj/
OBJ_NAME= $(SRC_NAME:.c=.o)
OBJ= $(addprefix $(OBJ_PATH), $(OBJ_NAME))

#GCC BLOC
#GCC flag, you don't have to modify this (but you're free to go)
GCC= gcc -Wall -Wextra -Werror

#INCLUDE BLOC
#Don't forget to include the other librarie that yo use
INC_LIB= libft/
INC_PATH= includes/
INC= -I $(INC_LIB) -I $(INC_PATH)

#Once again, don't forget to includes librairy that you use !
LIB= -L libft/ -lft

#FRAMEWORK BLOC
#Don't forget to add framework that you need !
FRAMEWORK= 

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/ re
	@make -C libft/ clean
	@$(GCC) $(SRC) $(INC) $(LIB) -o $(NAME)
	@echo "$(NAME) has been created."

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || echo "" 2> /dev/null
	@$(GCC) $(INC) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_PATH)
	@echo "$(NAME) objects files are deleted."

fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME) is deleted."

re: fclean all

norme:
	@norminette $(INC_LIB)**.[ch]
	@norminette $(SRC_PATH)**.[ch]
	@norminette $(INC_PATH)**.[ch]

.PHONY: clean fclean re norme
