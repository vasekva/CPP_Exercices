NAME 		= refs

D_GREEN		=	\033[0;32m
L_GREEN		=	\033[1;32m
L_BLUE		=	\033[1;36m
PURPLE		=	\033[1;35m
NC			= 	\033[0m

CC 			= c++

CPPFLAGS	= -Wall -Wextra -Werror -Wno-unused -std=c++98 -MMD

SRCS		= main.cpp

OBJS_DIR 	= objs/

OBJS 		= $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))
D_FILES 	= $(patsubst %.o,%.d,$(OBJS))

.PHONY: all, clean, fclean, re

all: $(NAME)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: ./%.cpp
	@$(CC) $(CPPFLAGS) -c $< -o $@
	@printf "$(L_BLUE)Object %-40.100s [$(D_GREEN)✔$(L_BLUE)]\r" $@

$(NAME): $(OBJS_DIR) $(OBJS) $(SRCS)
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@printf '$(L_GREEN)%-100.100s\n$(NC)' '${NAME} compile success!'

clean:
	@$(RM) $(OBJS) $(D_FILES)
	@rm -rf $(OBJS_DIR)
	@printf '$(PURPLE)Delete objects success!\n$(NC)'

fclean: clean
	@$(RM) $(NAME)
	@printf '$(PURPLE)Delete ${NAME} success!\n$(NC)'

-include $(DEPS)

re: fclean all