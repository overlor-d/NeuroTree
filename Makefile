CC = gcc
CFLAGS = -Wall -O2 -Iinclude
LIBS = -lfreeglut -lglu32 -lopengl32 -lm

SRC = src/main.c
OBJ = $(SRC:.c=.o)
EXEC = arbre3D.exe

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

exec:
	./$(EXEC)

test_main:
	$(CC) $(CFLAGS) -o test test/main.c $(LIBS)
	./test C:\Users\over

clean:
ifeq ($(OS),Windows_NT)
	@if exist src\main.o del /F /Q src\main.o
	@if exist $(EXEC) del /F /Q $(EXEC)
else
	rm -f $(OBJ) $(EXEC)
endif

