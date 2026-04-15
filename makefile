CC = gcc

SRC = main.c dll.c input.c compare.c addition.c substraction.c multiplication.c division.c

OUT = apc

all:
	$(CC) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)