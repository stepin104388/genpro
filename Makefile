SRC = unity/unity.c\
src/sweeper.c\
test/test_sweeper.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = MINISWEEPER.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html
