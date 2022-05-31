GRM=compil.y
LEX=compil.l
BIN=compil

CC=gcc
CFLAGS=-Wall -g

OBJ=y.tab.o lex.yy.o main.o tableSymbole.o TableInstruction.o Interpreteur.o TableFonction.o TableJump.o

all: $(BIN)

%.o: %.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

y.tab.c: $(GRM)
	byacc -d -t -v $<

lex.yy.c: $(LEX)
	flex $<

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -o $@

clean:
	rm $(OBJ) y.tab.c y.tab.h lex.yy.c

