NAME 		= functions

D_GREEN		=	\033[0;32m
L_GREEN		=	\033[1;32m
L_BLUE		=	\033[1;36m
PURPLE		=	\033[1;35m
NC			= 	\033[0m

CXX 		= c++

FLAGS		= -Wall -Wextra -Werror -Wno-unused -std=c++98 -MMD

SRCS		= main.cpp

OBJS_DIR 	= objs/

HEADERS		= -I ./headers/

OBJS 		= $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))
D_FILES 	= $(patsubst %.o,%.d,$(OBJS))

.PHONY: all, clean, fclean, re

all: $(OBJS_DIR) $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)
	@printf '$(L_GREEN)%-100.100s\n$(NC)' '${NAME} compile success!'

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: ./%.cpp
	@$(CXX) $(FLAGS) $(HEADERS) -c $< -o $@
	@printf "$(L_BLUE)Object %-40.100s [$(D_GREEN)✔$(L_BLUE)]\r" $@

clean:
	@$(RM) $(OBJS) $(D_FILES)
	@rm -rf $(OBJS_DIR)
	@printf '$(PURPLE)Delete objects success!\n$(NC)'

fclean: clean
	@$(RM) $(NAME)
	@(rm -rf file_shrubbery)
	@printf '$(PURPLE)Delete ${NAME} success!\n$(NC)'

-include $(D_FILES)

re: fclean all