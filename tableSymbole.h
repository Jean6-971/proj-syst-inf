#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct Symbole {
    char id[16];
    int addr;
    char type[16];
    bool init;
    int depth;
} Symbole;


typedef struct TableSymbole {
    Symbole ts[1000];
    int nb_symboles;
    int depth;
} TableSymbole;

void InitTS();

int Add_symb(char id[16], char type[16], bool init);

void Inc_depth();

int Dec_depth();

int Get_addr(char id[16]);

void Print_ts();

int Set_init_symbole(char id[16]);

int Add_symb_temp(char type[16]);

int Get_addr_top();

int Get_addr_second();

void free_temp_top();