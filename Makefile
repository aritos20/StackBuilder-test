NAME    = MusicalLake
SRCS    = main.cpp Musical.cpp

OBJS    = $(SRCS:.cpp=.o)
CXX        = clang++

all: $(NAME)

$(NAME):    $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re:    fclean all