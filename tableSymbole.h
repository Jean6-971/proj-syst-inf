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

int Add_symb(char * id, char * type, bool init);

void Inc_depth();

int Dec_depth();

int Get_addr(char * id);

void Print_ts();

int Set_init_symbole(char * id);

void Add_symb_temp(char * type);

int Get_addr_top();

int Get_addr_second();

void free_temp_top();

void Add_symb_func(char * id, int addr, char * type, bool init);

void set_TS_func_mode();

void set_TS_normal_mode();


