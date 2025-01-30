CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
OBJ_DIR	=	obj/
GREY	=	\33[1;30m
BLUE	=	\33[0;34m
DEFAULT	=	\33[0m

all: Colleen Grace Sully

Colleen: $(OBJ_DIR)Colleen.o
	@printf "$(GREY)Compiling $(BLUE)$@$(DEFAULT)\n"
	@$(CC) $(CFLAGS) $< -o $@

Grace: $(OBJ_DIR)Grace.o
	@printf "$(GREY)Compiling $(BLUE)$@$(DEFAULT)\n"
	@$(CC) $(CFLAGS) $< -o $@

Sully: $(OBJ_DIR)Sully.o
	@printf "$(GREY)Compiling $(BLUE)$@$(DEFAULT)\n"
	@$(CC) $(CFLAGS) $< -o $@

$(OBJ_DIR)%.o: %.c
	@mkdir -p $(@D)
	@printf "$(GREY)Compiling $(BLUE)$< $(GREY)> $(BLUE)$@$(DEFAULT)\n"
	@$(CC) $(CFLAGS) -c $< -o $@ 


clean:
	@printf "$(GREY)Deleting $(BLUE)$(OBJ_DIR)$(DEFAULT)\n"
	@rm -fr $(OBJ_DIR)

fclean: clean
	@printf "$(GREY)Deleting $(BLUE)Colleen$(DEFAULT)\n"
	@rm -f Colleen
	@printf "$(GREY)Deleting $(BLUE)Grace$(DEFAULT)\n"
	@rm -f Grace
	@printf "$(GREY)Deleting $(BLUE)Grace's Kid$(DEFAULT)\n"
	@rm -f Grace_kid.c
	@printf "$(GREY)Deleting $(BLUE)Sully$(DEFAULT)\n"
	@rm -f Sully
	@printf "$(GREY)Deleting $(BLUE)Sully Clones$(DEFAULT)\n"
	@rm -f Sully_*

re: fclean all